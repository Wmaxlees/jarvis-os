/*!
   Copyright 2015 W. Max Lees

   This file is part of Jarvis OS.

   Jarvis OS is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   Jarvis OS is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with Jarvis OS.  If not, see <http://www.gnu.org/licenses/>.


   @file: TestModule.hpp

   @author W. Max Lees <max.lees@gmail.com>
   @docdate 06.06.2015

   @descr Header file for PoC module
*/

#ifndef _H_TESTMODULE
#define _H_TESTMODULE

#include <string>

#include "../Module.hpp"

class TestModule: public Module {

	public:
		std::string call(std::string in);
		std::string who();

	private:
		std::string test();

};

#endif //_H_TESTMODULE
