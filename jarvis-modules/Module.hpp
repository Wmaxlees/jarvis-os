/**
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


   @file: Module.hpp

   @author W. Max Lees
   @docdate 06.08.2015

   @descr Jarvis OS Module header. All modules must subclass this interface
*/

#ifndef _H_MODULE
#define _H_MODULE

#include <string>

//! Interface for any Jarvis Module
/*!
   This interface should be used for any module to be used in the Jarvis system.
   It comes with two functions that must be overridden.

   std::string call(std::string in) -- Used to call functions by the Jarvis Module
      frame.
   std::string who() -- Used by the Jarvis Module frame to determine what functions
      can be called and what parameters are required.

   All data should be passed via pure JSON strings.
*/
class Module {
	public:
		//! Calls module functions
		/*!
		   @param in A JSON string of the function to be called and the arguments
			     for that function
		   @return A JSON string of the result and any additional information 
		*/
		virtual std::string call(std::string in) = 0;
		//! Returns a description of the module
		/*!
		   @return A JSON string of all possible function calls to the module
			   and a list of their necessary arguments
		*/
		virtual std::string who() = 0;

      //! Destructor
      /*!
         Must be overloaded to avoid possible 'delete' problems
      */
      virtual ~Module(){}
      
};


#endif // _H_MODULE

