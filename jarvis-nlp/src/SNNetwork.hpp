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
   FILE: SNNetwork.hpp

   @author W. Max Lees
   @docdate 06.11.2015

   @descr Network that implements the network interface
          and just used standard Sigmoid Neurons
*/

#ifndef _H_SNNETWORK
#define _H_SNNETWORK

#include <vector>

#include "Network.hpp"
#include "SNLayer.hpp"

namespace Jarvis {
   namespace JarvisNLP {

      //! A Sigmoid Neural Network that implements the Network interface
      /*!
         A sigmoid neural network. Used for NLP to generate a vector based
         based on the network
      */
      template <typename T>
      class SigmoidNeuronNetwork: public Network<T> {
      	public:
            //! Initializes the neural network with sigmoid neurons
            bool init();
            //! Run the network and get the result
            std::vector<T> call(std::vector<T> input);
            //! Destroys the vector
            bool destroy();

            ~SigmoidNeuronNetwork();
      	protected:
            std::vector<SigmoidNeuronLayer<T> > layers; //!< The layers of the network

      		
      };

   }
}

#endif // _H_SNNETWORK