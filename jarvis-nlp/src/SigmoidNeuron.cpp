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
	FILE: SigmoidNeuron.cpp

	@author W. Max Lees
	@docdate 06.05.2015

	@descr Sigmoid Neuron class for neural nets 
*/

#include <vector>
#include <math.h>

#include "SigmoidNeuron.hpp"

/**
	Set the input for the sigmoid neuron

	@param input the input vector
*/
void SigmoidNeuron::setInput(std::vector<float> input) {
	this->x = input;

}

/**
	Calculate the output using the logistical function
*/
float SigmoidNeuron::calculateOutput() {
	return 1/(1+exp(-(this->dotProduct()) - b));
}


/**
	Constructor
*/
SigmoidNeuron::SigmoidNeuron(std::vector<float> w, signed char b) {
	this->w = w;
	this->b = b;
}

/**
	Dot product of the x and w (x.w)
*/
float SigmoidNeuron::dotProduct(){
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
