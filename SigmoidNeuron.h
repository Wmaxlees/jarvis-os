/*
 * AUTHOR:	W. Max Lees
 * EMAIL:	william.lees@ucdenver.edu
 * FILE:	SigmoidNeuron.h
 *
 * DESCRIPTION:
 */


#ifndef _H_SIGMOIDNEURON
#define _H_SIGMOIDNEURON

#include <boost/numeric/ublas/vector.hpp>

class SigmoidNeuron {
	private:
		// Set inputs
		void setInput(Vector<float> input);


		// Calculate the output
		float calculateOutput();

	protected:
		Vector<float> x;	// Weight
		Vector<float> w;	// Input

		signed char b;		// Bias

};

#endif // _H_SIGMOIDNEURON
