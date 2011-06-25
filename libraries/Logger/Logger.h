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


#ifndef Logger_h
#define Logger_h


#include "WProgram.h"
#include "Message.h"
#include "SerialOutput.h"
#include "SDOutput.h"

#include "Debug.h"
#define LOGGER_FLUSH_MAX 30 

class Logger
{
	static byte flushCount;
	public:
		static void begin();
		static void log(Message &msg);
};




#endif

