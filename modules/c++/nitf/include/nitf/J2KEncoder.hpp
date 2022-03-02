/* =========================================================================
 * This file is part of NITRO
 * =========================================================================
 *
 * (C) Copyright 2017, MDA Information Systems LLC
 * (C) Copyright 2022, Maxar Technologies, Inc.
 *
 * NITRO is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program; if not, If not,
 * see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef NITF_J2KEncoder_hpp_INCLUDED_
#define NITF_J2KEncoder_hpp_INCLUDED_
#pragma once

#include <string>
#include <memory>

#include <types/RowCol.h>

#include "j2k/j2k_Encoder.h"

#include "nitf/J2KImage.hpp"
#include "nitf/J2KCompressionParameters.hpp"

namespace j2k
{
    /*!
     * \class OPJEncoder
     * \desc RAII wrapper around opj_codec_t.
     */
    class Encoder final
    {
        struct Impl;
        std::unique_ptr<Impl> pImpl_;

    public:
        /*!
         * Constructor
         *
         * \param image The openjpeg image.
         *
         * \param compressionParams The J2K compression parameters.
         */
        Encoder(Image& image, const CompressionParameters& compressionParams);
        Encoder(const Encoder&) = delete;
        Encoder& operator=(const Encoder&) = delete;
        Encoder(Encoder&&) = default;
        Encoder& operator=(Encoder&&) = default;
        ~Encoder();

        /*!
         *  \return The openjpeg codec.
         */
        j2k_codec_t* getNative() const noexcept;

        /*!
         * \return The error message generated by openjpeg during encoding.
         */
        std::string getErrorMessage() const;

        /*!
         * \return true if an openjpeg error has occurred and false otherwise.
         */
        bool errorOccurred() const;

        /*!
         * Sets the error message generated by openjpeg.
         *
         * \return msg The openjpeg error message.
         */
        void setError(const std::string& msg);

        /*!
         * Clears the openjpeg error message.
         */
        void clearError() noexcept;
    };
}

#endif // NITF_J2KEncoder_hpp_INCLUDED_
