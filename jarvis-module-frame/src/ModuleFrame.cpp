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

   @descr File for module frame class
*/

// TODO: GET RID OF THIS
#include <iostream>

#include "ModuleFrame.hpp"

namespace Jarvis {
   namespace ModuleFrame {

      /*!
         Creates the handle to the module and then generates the pointer
         to the module class.

         TODO: !!! CREATE A WAY OF SPECIFYING FUNCTION TO CALL

         TODO: ADD LOGGING INSTEAD OF STD::COUT
         TODO: CREATE CUSTOM EXCEPTION TO BE THROWN
      */
      void ModuleFrame::load(const char* modFile) {
			// Check if modules are allowed
			if (!g_module_supported()) {
				std::cout << "Modules not supported on this system\n";
				throw 1;
			}

         // Create a handle to the module
         this->handle = g_module_open(modFile, G_MODULE_BIND_LAZY);
         if (!this->handle) {
            std::cout << "Error loading module\n"; // TODO: ADD LOG ABILITY
            throw 1; // TODO: CREATE CUSTOM EXCEPTION CLASS 
         }

         // Create pointers to the module functions
			g_module_symbol(this->handle, "get", (gpointer *)&this->get_function);
			g_module_symbol(this->handle, "destroy", (gpointer *)&this->destroy_function);
         if (g_module_error()) {
            std::cout << "Error getting pointers to functions\n";
            throw 1; // TODO: CUSTOM EXCEPTION + LOGGING
         }

         // Get the module pointer
         this->module = this->get_function();

      }


      /*!
         Calls the specified function
      */
      void ModuleFrame::run(const char* cmd) {
         this->module->call(cmd);
      }


      /*!
         Releases the pointer to the Module class
         and then releases the module as well
      */
      void ModuleFrame::release() {
         // Release pointer to the module
         this->destroy_function(this->module);

         if (this->handle)
            g_module_close(this->handle);

      }

      /*!
         Initializes all the pointers in the class to nullptr
      */
      ModuleFrame::ModuleFrame() {
         this->handle = nullptr;
         this->get_function = nullptr;
         this->destroy_function = nullptr;
         this->module = nullptr;
      }


      /*!
         Releases all the used pointers
      */
      ModuleFrame::~ModuleFrame() {
         if (this->handle)
            g_module_close(this->handle);

         this->get_function = nullptr;
         this->destroy_function = nullptr;
         this->module = nullptr;
      }

   }
}

