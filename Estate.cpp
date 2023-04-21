/**
 * @file Estate.cpp
 * @author Brenda Romero Solano (brenda.romero@ucr.ac.cr)
 * @brief Implementation of the Estate class, which has two or none parameter.
 * @version 0.
 * @date 2023-04-20
 * 
 * This file contains the implementation of the Estate class, which represents 
 * a estate member in the class campus.
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
#include "Estate.hpp"
#include <iostream>

using namespace std;

/**
 * @brief Constructor of the class Estate.
 * 
 * This constructor creates an object of the Estate class
 * with the corresponding parameters.
 * 
 * @param title Name of the estate.
 * @param bus  It shows if the bus pass or not.
 */
Estate :: Estate(string title,bool bus){
    this->name = title;
    this->internalBus = bus;
}
/**
 * @brief Constructor of the class Estate.
 * 
 * This constructor creates an object of the Estate class
 * without parameters.
 * 
 */
Estate ::  Estate(){
    this->name="Null";
}

    /**
     * @brief This method shows the basic information of
     * the estate object.
     * 
     */
    void Estate :: show()const{
        cout << "The Estate " << this->name << " has " << this->faculties.size() + this->parkingBuildings.size()
        << " buildings, "<< this->faculties.size() << " are faculties and "<< this->parkingBuildings.size()
        << " are parkings buildins; the internal bus";

        if (this->internalBus==INTERNAL_BUS_PASS){
            cout <<" pass through it."<< endl;
        }else{
            cout <<" doesn't pass through it."<<endl;
        }
    }

    /**
     * @brief Method add a new faculty.
     * 
     * This method add a new faculty in a deque called faculties.
     *   
     * @param faculty The new faculty for the deque.
     */
    void Estate :: addFaculty(Faculty faculty){
        this->faculties.push_back(faculty);
    }

    /**
     * @brief Method add a new parking.
     * 
     * This method add a new parking in a deque called faculties.
     *   
     * @param parking The new parking for the deque.
     */
    void Estate :: addParking(Parking parking){
        this->parkingBuildings.push_back(parking);
    }

    /**
     * @brief This method shows the information of the buildings safed in deques.
     * 
     */
    void Estate :: showBuildings(){
        cout <<"\nInformation about each building in estate "<<this->name<< ": \n"<<endl;
            if (not this->faculties.empty()){
                for (const auto& faculty : this->faculties) {
                    faculty.show();
                }
            }else{
                cout <<this->name<< " does not has faculties."<<endl;
            }
            if (not this->parkingBuildings.empty()){
                    for (const auto& parking : this->parkingBuildings) {
                        parking.show();
                    }
                }else{
                    cout <<this->name<< " does not has parking buildings."<<endl;
                }
            if (not this->faculties.empty()){
                for (const auto& faculty : this->faculties) {
                    faculty.showClassrooms();
                }
            }
    }

    /**
     * @brief This method shows the information of the varible name.
     * 
     * @return string name of the object campus.
     */
    string Estate::getName() const {
        return this->name;
    }

    /**
     * @brief This method shows the information of the varible name.
     * 
     * @return bool this show if the internal bus pass through it.
     */
    bool Estate::getInternalBus() const{
        return this->internalBus;
    }