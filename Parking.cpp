/**
 * @file Parking.cpp
 * @author Brenda Romero Solano (brenda.romero@ucr.ac.cr)
 * @brief Implementation of the Parking class, which has two parameters.
 * 
 * This file contains the implementation of the Parking class, which represents 
 * a parking building member in the class Estate. The Parking class is derived from the 
 * Building class and doesn't contains additional information.
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
#include "Parking.hpp"
#include <iostream>
using namespace std;

/**
 * @brief Constructor of the class Parking.
 * 
 * This constructor creates an object of the Parking class
 * with the corresponding parameters.
 * 
 * @param title Name of the parking building.
 * @param lift  It shows if a parking building has an elevator or not.
 */
Parking :: Parking(string title,bool lift) : Building(title, lift){}

    /**
     * @brief This method shows the basic information of
     * the parking object.
     * 
     */
    void Parking :: show() const{
        cout <<"The parking building name is " << this->name;
        if (this->elevator==HAVE_ELEVATOR){
            cout <<" and it has elevators." << endl;
        }else{
            cout <<" and it doesn't have any elevator." << endl;
        }
    }