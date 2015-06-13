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
   FILE: JarvisNLP.hpp

   @author W. Max Lees
   @docdate 06.11.2015

   @descr The header file for the class that will run the entire
   		  program
*/

#ifndef _H_JARVISNLP
#define	_H_JARVISNLP

#include <string>
#include <vector>

#include "Network.hpp"

namespace Jarvis {
	namespace JarvisNLP {


		//! Template class that runs the NLP part of Jarvis
		/*!
			@tparam T - The type of scalar value used in the net
			
			Creates, Loads, Saves, and runs the neural network
		*/
		template <typename T>
		class JarvisNLP {
			public:
				//! Constructor
				JarvisNLP();

				//! Destructor
				~JarvisNLP();

				//! Initialize the class (load the settings from the config.json file)
				void init();

				//! Create a fresh neural net
				void createNewNet();

				//! Load a neural net from a file
				void loadNetFromFile();

				//! Save a neural net to a file
				void saveNetToFile(const char* filename);

				//! Set the value input string
				void setInput(std::string& in);

				//! Run the neural net based on the current input string
				std::vector<T> run();

			protected:
				Network<T> *m_pNet;			//!< The neural network
				std::string *m_pInput;		//!< Input string


		};
	}
}

#endif


