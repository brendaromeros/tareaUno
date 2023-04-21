/**
 * @file Campus.hpp
 * @author Brenda Romero Solano (brenda.romero@ucr.ac.cr)
 * @brief Declaration of the Campus class and its member functions.
 * 
 * This file contains the declaration of the Campus class, which represents 
 * a campus of the university UCR.
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
#ifndef CAMPUS_H
#define CAMPUS_H

#include <string>
#include <deque>
#include "Estate.hpp"

using namespace std;

/**
 * @brief Enumeration for the options to use in the file.
 */
enum optionsCampus{
    TOTAL_ESTATES=5,                /**< Total admit estates*/
    END=0,                          /**< Condition to end a loop*/
    CONTINUE=1,                     /**< Condition to continue a loop*/
    BIGGEST_IDENTIFIER= 99999999    /**< Biggest identifier for a class*/
};

/**
 * @brief The Campus class represents a campus member in a university.
 * 
 */
class Campus{
    private: 
        string name;            ///< The name of the campus.
        int maxIndexEstates;    ///< The biggest index for the array estates.
    public:
        Estate estates[TOTAL_ESTATES]={}; ///< The array that safe the estates.
        deque<int> used;                  ///< A deque of the identifiers used before.
        
        /**
         * @brief To declare construct of a new Campus object
         * 
         * This constructor creates an object of the Campus class
         * with the corresponding parameter.
         * 
         * @param name Name of the campus.
         */
        Campus(string name); 


        /**
         * @brief To declare that get the Max Index Estates object
         * 
         * @return int the biggest index in the array estates
         */
        int getMaxIndexEstates() const;

        /**
         * @brief To declare that get the Name object
         * 
         * @return string name of the campus
         */
        string getName() const;

        /**
         * @brief To declare method that add a new estate.
         * 
         * This method add a new estate in a array called estates and increase the counte
         * maxIndexEstates; if the array is full, shows an error message.
         * 
         * @param estate The new estate to add in the array estates.
         */
        void addEstate(Estate estate); 
        /**
         * @brief To declare method that shows that the estate where the bus pass through.
         * 
         */   
        void busRoute();
        
        /**
         * @brief To declare method that add a new identifier for a classroom.
         * 
         * @return int Original identifier.
         */
        int createIdentifier();

};
#endif //Campus.hpp