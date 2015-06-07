/**
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
	along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
*/

/*
 * AUTHOR:	W. Max Lees
 * EMAIL:	william.lees@ucdenver.edu
 * FILE:	SigmoidNeuron.h
 *
 * DESCRIPTION:
 */


#ifndef _H_SIGMOIDNEURON
#define _H_SIGMOIDNEURON

#include <vector>

class SigmoidNeuron {
	public:
		// Set inputs
		void setInput(std::vector<float> input);

		// Calculate the output
		float calculateOutput();

		// Constructor
		SigmoidNeuron(std::vector<float> w, signed char b);

	protected:
		std::vector<float> x;	// Input
		std::vector<float> w;	// Weights

		signed char b;		// Bias

		float dotProduct();

};

#endif // _H_SIGMOIDNEURON
