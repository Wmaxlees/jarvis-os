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


   @file: TestModule.cpp

   @author W. Max Lees
   @docdate 06.07.2015

   @descr Jarvis OS test module for proof of concept
*/

#include <rapidjson/document.h>
#include <iostream>

#include "../Module.hpp"
#include "TestModule.hpp"

std::string TestModule::call(std::string in) {
	// Parse the json string
	rapidjson::Document doc;
	doc.Parse(in.c_str());

	if (doc["function"] == "test")
		return test();

	else
		return "Function not found";
}


std::string TestModule::who() {
	return "{ \"functions\": [ \"function\": \"test\" ] }";
}


TestModule::~TestModule() {

}


std::string TestModule::test() {
	std::cout << "Test call successful" << std::endl;

	return "Test Successful";
}

