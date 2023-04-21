/**
 * @file Estate.hpp
 * @author Brenda Romero Solano (brenda.romero@ucr.ac.cr)
 * @brief Declaration of the Estate class and its member functions.
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
#ifndef ESTATE_H
#define ESTATE_H
#include <string>
#include "Faculty.hpp"
#include "Parking.hpp"
#include <deque>

using namespace std;

/**
 * @brief Enumeration for the options to use in the file.
 */
enum optionsEstate{
    INTERNAL_BUS_DOES_NOT_PASS=0, /**< The internal bus doesn't pass through. */
    INTERNAL_BUS_PASS=1           /**< The internal bus pass through. */
};

/**
 * @brief The Estate class represents a estaste member in a campus.
 * 
 */
class Estate{
private:
    string name;                      ///< Name of the estate.
    bool internalBus;                 ///< Shows if the internal bus pass through it.
    deque<Faculty> faculties;         ///< Safe the faculties of the estate.
    deque<Parking> parkingBuildings;  ///< Safe the parking buildings of the estate.

public: 

    /**
     * @brief To declare the construct of a new Estate object
     * 
     * @param name Name of the estate.
     * @param internalBus Show if the internal Bus pass through it.
     */
    Estate(string name,bool internalBus);
    
    /**
     * @brief To declare the construct of a new Estate object
     * without parameters
     * 
     */
    Estate();

    /**
     * @brief To declare the method that show
     * the information of the estate.
     * 
     */
    void show() const;

    /**
     * @brief To delare the method that add a new faculty to the deque faculties.
     * 
     * @param faculty New faculty to add.
     */
    void addFaculty( Faculty faculty);

    /**
     * @brief To delare the method that add a new parking to the deque parkingBuildins.
     * 
     * @param parking New parking to add.
     */
    void addParking( Parking parking);
    
    /**
     * @brief To declare the method that show
     * the information of any building in the estate.
     * 
     */
    void showBuildings();
    
    /**
     * @brief  To Declare method that get the Name object
     * 
     * @return string Name  of the states
     */
    string getName() const;
    
    /**
     * @brief To declare method that get the Internal Bus object.
     * 
     * @return true if the internal bus pass through the estate.
     * @return false if the internal bus doesn't pass through it.
     */
    bool getInternalBus() const;
};
#endif //Estate.hpp