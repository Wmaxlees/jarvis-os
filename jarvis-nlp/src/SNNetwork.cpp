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
   along with Jarvis OS.  If not, see <http://www.gnu.org/licenses/>.
*/

/**
   FILE: SNNetwork.cpp

   @author W. Max Lees
   @docdate 06.12.2015

   @descr Network that implements the network interface
          and just used standard Sigmoid Neurons
*/

#include "SNNetwork.hpp"

namespace Jarvis {
	namespace JarvisNLP {

		/*!
			Initializes the neural network.

			Checks if a config json file exists. If it does,
			it uses the configuration to determine how to initialize
			the network. Otherwise, it initializes a default network

			@return bool
				Returns whether the initialization was successful
		*/
		template <typename T>
        bool SigmoidNeuronNetwork<T>::init() {

        	// TODO: INITIALIZE THE NETWORK

        	return true;
        }


        /*!
			Actually determines the output vector of a given
			input vector
        */
        template <typename T>
        std::vector<T> SigmoidNeuronNetwork<T>::call(std::vector<T> input) {
        	// TODO: RUN THE NETWORK
        	// MAYBE RECURSIVELY (OUTPUT VECTOR CALLS PARENT->PARENT->PARENT
        	// ALL THE WAY UP TO THE FIRST LAYER AND THEN BACK THROUGH)
        }

        /*!
			Not used, but must be created to implement the Network interface
        */
        template <typename T>
        bool SigmoidNeuronNetwork<T>::destroy() {

        }

        /*!
			Destructor
        */
        template <typename T>
        SigmoidNeuronNetwork<T>::~SigmoidNeuronNetwork() {}

	}
}

