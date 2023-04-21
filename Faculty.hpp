/**
 * @file Faculty.hpp
 * @author Brenda Romero Solano (brenda.romero@ucr.ac.cr)
 * @brief Declaration of the Faculty class and its member functions.
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
#ifndef FACULTY_H
#define FACULTY_H

#include <string>
#include <map>
#include <deque>
#include "Building.hpp"
#include "Classroom.hpp"

using namespace std;

/**
 * @brief Enumeration for the options to use in the file.
 */
enum optionsFaculty{
    HAS_Cafeteria=1,            /**< The faculty has cafeteria. */
    DOES_NOT_HAVE_Cafeteria=0,  /**< The faculty doen't have cafeteria. */
    };

/**
 * @brief The Faculty class represents a faculty member in a campus.
 * 
 */
class Faculty : public Building{
    private:
        bool cafeteria;                         ///< Shows if the faculty has a cafeteria.
        map<string, deque<Classroom>> floors;   ///< List of floors and each classroom.
    public:

        /**
         * @brief To declare the construct of a new Faculty object
         * 
         * @param name 
         * @param elevator 
         * @param cafeteria 
         */
        Faculty(string name,bool elevator,bool cafeteria);
        
        /**
         * @brief To declare the method that shows the basic information of
         * the faculty object.
         * 
         */
        void show() const;
        
        /**
         * @brief To declare method that add a new classroom.
         * 
         * This method add a new classroom in a deque called floor ubicate in floors map;
         * if the key doesn't exist create a new deque and then, add it to the map.
         * 
         * @param classroom The new classroom for the map.
         * @param floor The floor where is ubicated the map.
         */
        void addClassroom(Classroom classroom,string floor);
        
        /**
         * @brief To declare method that shows the information of the the classrooms in 
         * the deque floors.
         * 
         */
        void showClassrooms() const;
};
#endif //Faculty.hpp