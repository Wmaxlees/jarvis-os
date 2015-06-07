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
	along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
*/

/**
	FILE: SigmoidNeuronBPlus.hpp

	@author W. Max Lees
	@docdate 06.06.2015

	@descr Header for a Sigmoid Neuron that has different biases
			 for each output
*/


#ifndef _H_SIGMOIDNEURONBPLUS
#define _H_SIGMOIDNEURONBPLUS

#include <vector>

class SigmoidNeuronBPlus {
	public:
		// Set inputs
		void setInput(std::vector<float> input);

		// Calculate the output
		std::vector<float> calculateOutput();

		// Constructor
		SigmoidNeuronBPlus(std::vector<float> w, std::vector<float> b);

	protected:
		std::vector<float> x;	// Input
		std::vector<float> w;	// Weights

		std::vector<float> b;	// Bias

		float dotProduct();

};

#endif // _H_SIGMOIDNEURONBPLUS
