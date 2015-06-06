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
