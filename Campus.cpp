/**
 * @file Campus.cpp
 * @author Brenda Romero Solano (brenda.romero@ucr.ac.cr)
 * @brief Implementation of the Campus class, which has one parameter.
 * 
 * This file contains the implementation of the Campus class, which represents 
 * a campus of university UCR.
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
#include "Campus.hpp"
#include <iostream>
#include <ctime>

using namespace std;

/**
 * @brief Constructor of the class Campus.
 * 
 * This constructor creates an object of the Campus class
 * with the corresponding parameter.
 * 
 * @param name Name of the campus.
 */
Campus :: Campus(string title){
    this->name=title;
    this->maxIndexEstates=-1;

}

    /**
     * @brief Method add a new estate.
     * 
     * This method add a new estate in a array called estates and increase the counte
     * maxIndexEstates; if the array is full, shows an error message.
     * 
     * @param estate The new estate to add in the array estates.
     */
    void Campus :: addEstate(Estate estate){
        if(this->maxIndexEstates==TOTAL_ESTATES-1){
            cout << "Five estates are already safe."<<endl;
        } else{
            this->maxIndexEstates++;
            this->estates[this->maxIndexEstates]=estate;
            
        }
    }

    /**
     * @brief This method shows the estate where the bus pass through.
     * 
     */
    void Campus :: busRoute(){
        cout <<"The internal bus pass through: ";
        for(int i =0;i<=this->maxIndexEstates;i++){
            if(this->estates[i].getInternalBus()){
                if (i< this->maxIndexEstates){
                    cout << estates[i].getName()<< ", ";
                }else if (i==this->maxIndexEstates){
                    cout << this->estates[i].getName()<< "."<<endl;
                }else{
                    cout << this->estates[i].getName()<< " and ";
                }           
            }
        }
    }
    /**
     * @brief This method shows the information of the varible maxIndexEstates.
     * 
     * @return int the biggest index in array estates.
     */
    int Campus :: getMaxIndexEstates() const{
        return this->maxIndexEstates;
    }
    /**
     * @brief This method shows the information of the varible name.
     * 
     * @return string name of the object campus.
     */
    string Campus :: getName() const{
        return this->name;
    }
    /**
         * @brief  This method  creates an original identifier for a classroom.
         * 
         * @return int Identifier for a classroom
         */
        int Campus :: createIdentifier(){
            bool condition=CONTINUE; ///< Condition to stop the loop.
            int identifier;          ///< A new identifier.
            while(condition){
                identifier= rand() % BIGGEST_IDENTIFIER;
                condition=END;
                if (not this->used.empty()){
                    
                    for (const auto& number : this->used) {
                        if (number==identifier){
                            condition=CONTINUE;
                            break;
                        }
                    }
                }
                
            }
            this->used.push_back(identifier);
            return identifier;
        };