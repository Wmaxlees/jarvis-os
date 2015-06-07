/*
 * AUTHOR:	W. Max Lees
 * EMAIL:	william.lees@ucdenver.edu
 * FILE:	SigmoidNeuron.cpp
 *
 * DESCRIPTION: 
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
	float result;
	for (unsigned char i = 0; i < this->x.size(); ++i) {
		result += this->x[i] * this->w[i];
	}

	return result;
}
