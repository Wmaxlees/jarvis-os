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


   @file: main.cpp

   @author W. Max Lees <max.lees@gmail.com>
   @docdate 06.08.2015

   @descr File that contains the main class that calls the module frames.
*/

#include <cstdlib>

#include "ModuleFrame.hpp"

using Jarvis::ModuleFrame::ModuleFrame;

int main(int argc, char** argv) {

   ModuleFrame* frame = new ModuleFrame();

   frame->load();

   frame->run();

   frame->release();

   delete frame;
   frame = nullptr;

   return EXIT_SUCCESS;
}

