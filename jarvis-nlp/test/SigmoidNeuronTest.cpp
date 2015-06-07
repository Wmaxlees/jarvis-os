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
*/

/**
   FILE: SigmoidNeuronTest.cpp

   @author W. Max Lees
   @docdate 06.05.2015

   @descr Unit testing for SigmoidNeuron
*/

#include "../../test/catch.hpp"
#include "../src/SigmoidNeuron.hpp"

SCENARIO ("Neuron can accept multi-sized inputs") {

	GIVEN("A vector has been created") {

		WHEN("The vector is passed different sized input vectors") {

			THEN("The x should match the input vector") {
				
			}
		}
	}
}
