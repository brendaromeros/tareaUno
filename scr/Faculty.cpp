/**
 * @file Faculty.cpp
 * @author Brenda Romero Solano (brenda.romero@ucr.ac.cr)
 * @brief Implementation of the Faculty class, which has three parameters.
 * 
 * This file contains the implementation of the Faculty class, which represents 
 * a faculty member in the class Estate. The Faculty class is derived from the 
 * Building class and contains additional information such as if it has a cafeteria.
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
#include "Faculty.hpp"
#include <iostream>
#include <deque>

using namespace std;

/**
 * @brief Constructor of the class Faculty.
 * 
 * This constructor creates an object of the Faculty class
 * with the corresponding parameters.
 * 
 * @param title Name of the faculty.
 * @param lift  It shows if a faculty has an elevator or not.
 * @param lunchroom It shows if a faculty has a lunchroom or not.
 */
Faculty :: Faculty(string title,bool lift, bool lunchroom) : Building(title, lift){
    this->cafeteria=lunchroom;
}

    /**
     * @brief This method shows the basic information of
     * the faculty object.
     * 
     */
    void Faculty :: show() const{
        cout <<"The faculty " << this->name;

        if (this->elevator==HAS_ELEVATOR){
            cout <<" has elevators and";
        }else{
            cout <<" doesn't have any elevator and";
        }
        if (this->cafeteria==HAS_Cafeteria){
            cout <<" has a cafeteria."<<endl;
        }else{
            cout <<" doesn't have a cafeteria."<<endl;
        }
    }

    /**
     * @brief Method add a new classroom.
     * 
     * This method add a new classroom in a deque called floor ubicate in floors map;
     * if the key doesn't exist create a new deque and then, add it to the map.
     * 
     * @param classroom The new classroom for the map.
     * @param floor The floor where is ubicated the map.
     */
    void Faculty :: addClassroom(Classroom classroom, string floor){
        auto it = this->floors.find(floor); ///<The iterator of the floor.
        
        if (it == this->floors.end()) {
            deque<Classroom> newFloor; ///< A new deque of classrooms.
            newFloor.push_front(classroom);
            this->floors[floor]=newFloor;
        }else{
            this->floors[floor].push_back(classroom);
        }
    }

    /**
     * @brief This method shows the information of the the classrooms in 
     * the deque floors.
     * 
     */
    void Faculty :: showClassrooms() const{
        if(not floors.empty()){
            cout <<"\nInformation about each classroom:\n"<< endl;
            
            for (const auto& par : floors) {
                for (const auto& room : par.second) {

                    cout << "The classroom "<< room.getIdentifier()<<" it's locate in the "<< par.first<<
                    " floor of "<< this->name<< ", it has "<< room.getDesks()<< " desk and it ";
                    
                    if (room.getProjector()==HAS_PROJECTOR){
                        cout << "has a projector. "<<endl;
                    }else{
                        cout << "doesn't have a projector. "<<endl;
                    }
                }
            } 
        }else{
        cout <<this->name<<" does not have classrooms"<< endl;
        }
    }