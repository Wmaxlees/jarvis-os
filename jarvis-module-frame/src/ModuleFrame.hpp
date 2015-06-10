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


   @file: ModuleFrame.hpp

   @author W. Max Lees <max.lees@gmail.com>
   @docdate 06.08.2015

   @descr Header file module frame class
*/

#ifndef _H_MODULEFRAME
#define _H_MODULEFRAME

#include <string>

#include "../../jarvis-modules/Module.hpp"

namespace Jarvis {
   namespace ModuleFrame {

      //! Typedef for access to get module function.
      /*!
         get() is called to return an instance of the target module's
         main class
      */                                           
      typedef Module* get();
      //! Typedef for access to destroy module function.
      /*!
         destroy is called to destroy an instance of the target module's
         main class. This must be used instead of 'delete' call
      */                                                             
      typedef void destroy(Module* module); 

      //! Class that holds the module and makes all necessary calls
      /*!
         This class is a frame that wraps around modules called by 
         Jarvis OS. These modules are basically the Jarvis equivolent
         of a standalone application.

      */
      class ModuleFrame {
         public:
            //! Load the module into the frame
            void load(const char* modFile);
            //! Run the specified function
            void run(const char* cmd);
            //! Releases the module
            void release();


            //! Constructor
            ModuleFrame();
            //! Destructor
            ~ModuleFrame();

         private:
            void* handle;              //!< Pointer to the actual module
            get* get_function;         //!< Pointer to the who() function
            destroy* destroy_function; //!< Pointer to the call() function

            Module* module;            //!< Pointer to the actual model object
      };

   }
}

#endif // _H_MODULEFRAME

