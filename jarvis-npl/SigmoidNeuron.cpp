/*
 * AUTHOR:	W. Max Lees
 * EMAIL:	william.lees@ucdenver.edu
 * FILE:	SigmoidNeuron.cpp
 *
 * DESCRIPTION: 
 */

#include <math.h>

#include "SigmoidNeuron.hpp"

/**
	Set the input for the sigmoid neuron

	@param input the input vector
*/
void SigmoidNeuron::setInput(Eigen::VectorXf input) {
	this->x = input;

}

/**
	Calculate the output using the logistical function
*/
float SigmoidNeuron::calculateOutput() {
	return 1/(1+exp(-this->w.dot(this->x) - b));
}
