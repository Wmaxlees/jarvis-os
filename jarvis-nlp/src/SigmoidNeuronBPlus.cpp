/*
 * AUTHOR:	W. Max Lees
 * EMAIL:	william.lees@ucdenver.edu
 * FILE:		SigmoidNeuronBPlus.cpp
 *
 * DESCRIPTION: 
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
