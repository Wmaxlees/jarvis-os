/**
   FILE: SigmoidNeuronTest.cpp

   @author W. Max Lees
   @docdate 06.05.2015

   @descr Unit testing for SigmoidNeuron
*/

#include <boost/numeric/ublas/vector.hpp>

#include "catch.hpp"

#include "../../jarvis-npl/SigmoidNeuron.h"

SCENARIO ("Neuron can accept multi-sized inputs") {

	GIVEN("A vector has been created") {
		SigmoidNeuron sn = new SigmoidNeuron();

		WHEN("The vector is passed different sized input vectors") {
			Vector<float, float, float> in(2.5f, 2.1f, 4.1f);
			sn.setInput(in);

			THEN("The x should match the input vector") {
				
			}
		}
	}
}
