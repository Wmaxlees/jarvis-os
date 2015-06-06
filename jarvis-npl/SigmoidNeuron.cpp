/*
 * AUTHOR:	W. Max Lees
 * EMAIL:	william.lees@ucdenver.edu
 * FILE:	SigmoidNeuron.cpp
 *
 * DESCRIPTION: 
 */

#include <math.h>
#include <boost/geometry/arithmetic/dot_product.hpp>

#include "SigmoidNeuron.hpp"

/**
	Set the input for the sigmoid neuron

	@param input the input vector
*/
void SigmoidNeuron::setInput(Vector<float> input) {
	this.x = input;

}

/**
	Calculate the output using the logistical function
*/
float SigmoidNeuron::calculateOutput() {
	return 1/(1+exp(-dot_product(this.w, this.x) - b));
}
