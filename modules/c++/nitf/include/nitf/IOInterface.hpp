/* =========================================================================
 * This file is part of NITRO
 * =========================================================================
 *
 * (C) Copyright 2004 - 2014, MDA Information Systems LLC
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

#ifndef __NITF_IO_INTERFACE_HPP__
#define __NITF_IO_INTERFACE_HPP__
#pragma once

#include <string>

#include "nitf/coda-oss.hpp"
#include "nitf/System.hpp"
#include "nitf/Object.hpp"
#include "nitf/exports.hpp"

/*!
 *  \file IOInterface.hpp
 */
namespace nitf
{

struct NITRO_NITFCPP_API IOInterfaceDestructor : public nitf::MemoryDestructor<nitf_IOInterface>
{
    ~IOInterfaceDestructor() = default;
    void operator()(nitf_IOInterface *io) override;

    IOInterfaceDestructor() = default;
    IOInterfaceDestructor(const IOInterfaceDestructor&) = delete;
    IOInterfaceDestructor& operator=(const IOInterfaceDestructor&) = delete;
    IOInterfaceDestructor(IOInterfaceDestructor&&) = delete;
    IOInterfaceDestructor& operator=(IOInterfaceDestructor&&) = delete;
};

/*!
 *  \class IOInterface
 *  \brief  The C++ wrapper for the nitf_IOInterface
 */
class NITRO_NITFCPP_API IOInterface : public nitf::Object<nitf_IOInterface, IOInterfaceDestructor>
{
protected:
    IOInterface() = default;
    void set_native_object(nitf_IOInterface* x)
    {
        setNative(x);
        getNativeOrThrow();
    }


public:
    IOInterface(nitf_IOInterface * x)
    {
        set_native_object(x);
    }

    IOInterface(const IOInterface& lhs);
    IOInterface & operator=(const IOInterface & x);

    ~IOInterface() = default;
    IOInterface(IOInterface&&) = default;
    IOInterface& operator=(IOInterface&&) = default;

    void read(void* buf, size_t size);

    void write(const void* buf, size_t size);

    bool canSeek() const;

    nitf::Off seek(nitf::Off offset, int whence);

    nitf::Off tell() const;

    nitf::Off getSize() const;

    int getMode() const;

    void close();

protected:
    mutable nitf_Error error{};
};

}
#endif
