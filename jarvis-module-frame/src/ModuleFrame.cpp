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


   @file: ModuleFrame.cpp

   @author W. Max Lees <max.lees@gmail.com>
   @docdate 06.08.2015

   @descr File for module class
*/

#include <dlfcn.h>

#include "ModuleFrame.hpp"

namespace Jarvis {
   namespace ModuleFrame {


      void ModuleFrame::load() {
         this->handle = dlopen("../jarvis-modules/modules/test-module.so", RTLD_LAZY);
         if (!handle) {
            throw 1; // TODO: CREATE CUSTOM EXCEPTION CLASS

         

      }


      void ModuleFrame::run() {

      }


      void ModuleFrame::release() {

      }


   }
}


#endif // _H_MODULEFRAME

