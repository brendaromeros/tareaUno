/**
 * @file Building.hpp
 * @author Brenda Romero Solano (brenda.romero@ucr.ac.cr)
 * @brief Declaration of the Building class and its member functions.
 * 
 * This file contains the declaration of the Faculty class, which represents 
 * a faculty member in the class Estate. The Faculty class is the origin for   
 * Faculty and Parking class.
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
#ifndef BUILDING_H
#define BUILDING_H

#include <string>

using namespace std;

/**
 * @brief Enumeration for the options to use in the file.
 */
enum optionsBuilding{
    HAS_ELEVATOR=1,             /**< The faculty has elevator. */
    DOES_NOT_HAVE_ELEVATOR=0,   /**< The faculty doen't have elevator. */
    };

/**
 * @brief The Building class represents a building member in a university.
 * 
 * The Faculty class is the original for the Faculty  
 * and Parking class.
 * 
 */
class Building{
    protected:
        string name;    ///< The name of the building.
        bool elevator;  ///< Shows if exist any elevator.

        /**
         * @brief To declare constructor of the class Building
         * 
         * This constructor creates an object of the Building class
         * with the corresponding parameters.
         * 
         * @param title Name of the building.
         * @param lift  It shows if a building has an elevator or not.
         */
        Building(string name,bool elevator);
};
#endif //Building.hpp