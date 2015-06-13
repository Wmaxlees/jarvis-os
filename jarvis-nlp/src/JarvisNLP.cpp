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
   FILE: JarvisNLP.cpp

   @author W. Max Lees
   @docdate 06.11.2015

   @descr Implementation of the class the runs the NLP portion of the
          Jarvis OS program
*/

#include "JarvisNLP.hpp"

namespace Jarvis {
   namespace JarvisNLP {
      /*!
         Constructor for JarvisNLP that initializes the pointers in the
         to nullptr.
      */
      template <typename T>
      JarvisNLP<T>::JarvisNLP() {
         this->m_pNet = nullptr;
         this->m_pInput = nullptr;
      }


      /*!
         Destructor for JarvisNLP. Makes sure the pointers are released before
         the class is destroyed.
      */
      template <typename T>
      JarvisNLP<T>::~JarvisNLP() {
         if (this->m_pNet)
            delete this->m_pNet;

         if (this->m_pInput)
            delete this->m_pInput;
      }


      //! Initialize the class (load the settings from the config.json file)
      template <typename T>
      void JarvisNLP<T>::init() {}

      //! Create a fresh neural net
      template <typename T>
      void JarvisNLP<T>::createNewNet() {}

      //! Load a neural net from a file
      template <typename T>
      void JarvisNLP<T>::loadNetFromFile() {}

      //! Save a neural net to a file
      template <typename T>
      void JarvisNLP<T>::saveNetToFile(const char* filename) {}

      //! Set the value input string
      template <typename T>
      void JarvisNLP<T>::setInput(std::string& in) {}

      //! Run the neural net based on the current input string
      template <typename T>
      std::vector<T> JarvisNLP<T>::run() {}
   }
}