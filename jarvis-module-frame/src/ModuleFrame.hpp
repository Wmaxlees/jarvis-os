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

      // Typedefs to get access module functions                                           
      typedef Module* get();                                                            
      typedef void destroy(Module* module); 

      //! Class that holds the module and makes all necessary calls
      /*!
         STUB

      */
      class ModuleFrame {
         public:
            //! Load the module into the frame
            /*!
               STUB
            */
            void load();


            //! Run the specified funcion
            /*!
               STUB
            */
            void run();

            //! Releases the module
            /*!
               STUB
            */
            void release();


         private:
            void* handle;        //!< Pointer to the actual module
            get* get_function;   //!< Pointer to the who() function
            destroy* destroy_function; //!< Pointer to the call() function

            Module* module;      //!< Pointer to the actual model object
      };

   }
}

#endif // _H_MODULEFRAME

