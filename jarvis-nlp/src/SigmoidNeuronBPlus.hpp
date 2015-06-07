/*
 * AUTHOR:	W. Max Lees
 * EMAIL:	william.lees@ucdenver.edu
 * FILE:		SigmoidNeuronBPlus.hpp
 *
 * DESCRIPTION:
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
