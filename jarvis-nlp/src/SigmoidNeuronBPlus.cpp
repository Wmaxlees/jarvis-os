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
	FILE: SigmoidNeuronBPlus.cpp

	@author W. Max Lees
	@docdate 06.06.2015

	@descr Sigmoid Neuron with different biases for each output
*/

#include <vector>
#include <math.h>

#include "SigmoidNeuronBPlus.hpp"

/**
	Set the input for the sigmoid neuron

	@param input the input vector
*/
void SigmoidNeuronBPlus::setInput(std::vector<float> input) {
	this->x = input;

}

/**
	Calculate the output using the logistical function
*/
std::vector<float> SigmoidNeuronBPlus::calculateOutput() {
	// Calculate dot
	float dot = this->dotProduct();
	
	// Calculate output vector
	std::vector<float> result(this->b.size());
	for (unsigned int i = 0; i < result.size(); ++i)
		result[i] = 1/(1+exp(-dot - this->b[i]));

	return result;
}


/**
	Constructor
*/
SigmoidNeuronBPlus::SigmoidNeuronBPlus(std::vector<float> w, std::vector<float> b) {
	this->w = w;
	this->b = b;
}

/**
	Dot product of the x and w (x.w)
*/
float SigmoidNeuronBPlus::dotProduct(){
	// TODO: MAKE A CUSTOM EXCEPTION CLASS
	if (this->x.size() != this->w.size())
		throw 0;

	// Calculate the dot product
	float result = 0.0f;
	for (unsigned char i = 0; i < this->x.size(); ++i) {
		result += this->x[i] * this->w[i];
	}

	return result;
}
