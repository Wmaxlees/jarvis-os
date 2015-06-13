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
   FILE: SNLayer.hpp

   @author W. Max Lees
   @docdate 06.11.2015

   @descr Single layer definition of a Sigmoid Neuron Network
*/

#ifndef _H_SNLAYER
#define _H_SNLAYER

#include <eigen3/Eigen/Core>

namespace Jarvis {
   namespace JarvisNLP {

      //! Single Sigmoid Neuron Layer for a neural network
      /*!
         Sigmoid Neuron layer. Uses a matrix with the rows representing a single
         neuron and the columns the weights for each input
      */
      template <typename T>
      class SigmoidNeuronLayer {
         public:
            //! Initializes the layer based on size of input and current layer
            void init(int prevLayerSize, int layerSize);


         protected:
            Eigen::Matrix<T, Eigen::Dynamic, Eigen::Dynamic> *neurons;  //!< A matrix representation of the actual layer (neuron x weight)

      };

   }
}

#endif // _H_SNLAYER