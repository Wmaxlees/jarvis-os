/*
 * AUTHOR:	W. Max Lees
 * EMAIL:	william.lees@ucdenver.edu
 * FILE:	SigmoidNeuron.h
 *
 * DESCRIPTION:
 */


#ifndef _H_SIGMOIDNEURON
#define _H_SIGMOIDNEURON

#include <Eigen/Dense>

class SigmoidNeuron {
	private:
		// Set inputs
		void setInput(Eigen::VectorXf input);


		// Calculate the output
		float calculateOutput();

	protected:
		Eigen::VectorXf x;	// Input
		Eigen::VectorXf w;	// Weights

		signed char b;	// Bias

};

#endif // _H_SIGMOIDNEURON
