/* Copyright 2011 David Irvine
 * 
 * This file is part of Loguino
 *
 * Loguino is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * Loguino is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with Loguino.  If not, see <http://www.gnu.org/licenses/>.
 * 
 * $Rev$:   
 * $Author$: 
 * $Date$:  

*/



#ifndef SerialOutput_h
#define SerialOutput_h

#include "WProgram.h"
#include "Logger.h"

#define SO_SERIAL_PORT Serial
#define SO_SERIAL_PORT_SPEED 9600

class SerialOutput
{
    static bool active;
    public:
        static bool begin();
        static bool logMessage(Message msg);
        static bool flush();
};

#endif

