/**
 * @file Classroom.cpp
 * @author Brenda Romero Solano (brenda.romero@ucr.ac.cr)
 * @brief Declaration of the Classroom class, which has three parameters.
 * 
 * This file contains the implementation of the classroom class, which represents 
 * a classroom member in the class Faculty.
 * 
 * @version 0.1
 * @date 2023-04-20
 * 
 * @copyright Copyright (c) 2023 
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 * 
 */
#include "Classroom.hpp"

using namespace std;

/**
 * @brief Constructor of the class Classroom.
 * 
 * This constructor creates an object of the Estate class
 * with the corresponding parameters.
 * 
 * @param tag Identifier of the classroom. 
 * @param bureau Amount of desks.
 * @param projectingMachine It shows if the classroom has any projector.
 */
Classroom :: Classroom(int tag, int bureau, bool projectingMachine){

    this->identifier = tag;
    this->desks = bureau;
    this->projector = projectingMachine;
}
    /**
     * @brief This method shows the information of the varible identifier.
     * 
     * @return int the identifier of the classroom 
     */
    int Classroom :: getIdentifier() const{
        return this->identifier;
    }

    /**
     * @brief This method shows the information of the varible desks.
     * 
     * @return int the total of desks 
     */
    int Classroom :: getDesks() const{
        return this->desks;
    }

    /**
     * @brief This method shows the information of the varible projector.
     * 
     * @return bool shows if the classroom has a projector
     */
    bool Classroom :: getProjector() const{

    return this->projector;
    
    }