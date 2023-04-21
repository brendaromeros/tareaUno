/**
 * @file Parking.hpp
 * @author Brenda Romero Solano (brenda.romero@ucr.ac.cr)
 * @brief Declaration of the Parking class and its member functions.
 *
 * This file contains the declaration of the Parking class, which represents 
 * a parking building of the university UCR.
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
#ifndef PARKING_H
#define PARKING_H

#include <string>
#include "Building.hpp"

using namespace std;

/**
 * @brief Enumeration for the option elevator to use in the file.
 */
enum Elevator{
    HAVE_ELEVATOR =1 /**< The parking building has elevator. */
};

/**
 * @brief The Parking class represents a parking building member in a estate.
 * 
 */
class Parking : public Building{
    public:
        /**
         * @brief To declare construct of a new Parking object.
         * 
         * @param name Name of the parking building.
         * @param elevator Shows if the building has any elevator..
         */
        Parking(string name,bool elevator);

        /**
         * @brief To declare method that shows the information of the object.
         * 
         */
        void show() const;
};
#endif //Parking.hpp