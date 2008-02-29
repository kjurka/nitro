/* =========================================================================
 * This file is part of NITRO
 * =========================================================================
 * 
 * (C) Copyright 2004 - 2008, General Dynamics - Advanced Information Systems
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

package nitf;

/**
 * An object that reads and parses a NITF file
 */
public final class Reader extends DestructibleObject
{
    /**
     * Reader Constructor
     *
     * @throws NITFException if a problem occurs in the underlying library
     */
    public Reader() throws NITFException
    {
        construct();
    }

    /**
     * @see DestructibleObject#DestructibleObject(long)
     */
    Reader(long address)
    {
        super(address);
    }

    /**
     * Constructs a new Reader
     *
     * @throws NITFException
     */
    private native synchronized void construct() throws NITFException;

    /**
     * Destructs the memory for the underlying object
     */
    protected native synchronized void destructMemory();

    /**
     * Read and parse the file into a Record
     *
     * @param inputHandle the IOHandle used to read from
     * @return a Record containing the read data
     * @throws NITFException
     */
    public native synchronized Record read(IOHandle inputHandle)
            throws NITFException;

    /**
     * Returns a new ImageReader
     *
     * @param imageSegmentNumber the index of the image to get a reader for
     * @return ImageReader
     * @throws NITFException
     */
    public native synchronized ImageReader getNewImageReader(
            int imageSegmentNumber) throws NITFException;


    /**
     * Returns a new SegmentReader for reading graphic data
     *
     * @param graphicSegmentNumber the index of the graphic to get a reader for
     * @return new SegmentReader
     * @throws NITFException
     */
    public native synchronized SegmentReader getNewGraphicReader(
            int graphicSegmentNumber) throws NITFException;


    /**
     * Returns a new SegmentReader for reading graphic data
     *
     * @param textSegmentNumber the index of the text to get a reader for
     * @return new SegmentReader
     * @throws NITFException
     */
    public native synchronized SegmentReader getNewTextReader(
            int textSegmentNumber) throws NITFException;


    /**
     * Returns a new DEReader
     *
     * @param deSegmentNumber the index of the DE to get a reader for
     * @return DEReader
     * @throws NITFException
     */
    public native synchronized DEReader getNewDEReader(int deSegmentNumber)
            throws NITFException;

    /**
     * Returns the Input IOHandle
     *
     * @return
     * @throws NITFException
     */
    public native synchronized IOHandle getInputHandle() throws NITFException;

    /**
     * Returns the Record associated with this Reader, or null if none is
     *
     * @return
     * @throws NITFException
     */
    public native synchronized Record getRecord() throws NITFException;

}

