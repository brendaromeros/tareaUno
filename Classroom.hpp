/**
 * @file Classroom.hpp
 * @author Brenda Romero Solano (brenda.romero@ucr.ac.cr)
 * @brief Declaration of the Classroom class and its member functions.
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
#ifndef CLASSROOM_H
#define CLASSROOM_H

using namespace std;

/**
 * @brief Enumeration for the options to use in the file.
 */
enum optionsClassroom{
    HAS_PROJECTOR=1,            /**< The faculty has projector. */
    DOES_NOT_HAVE_PROJECTOR=0   /**< The faculty doen't have projector. */
    };

/**
 * @brief The Classroom class represents a classroom member in a faculty.
 * 
 */
class Classroom{
    private:
        int identifier;  ///< Identifier of the classroomm.
        int desks;       ///< Number of desks in the classroom.
        bool projector;  ///< Shows if the classroom has a projector.

    public:

        /**
         * @brief To declare the construct of a new Classroom object.
         * 
         * @param identifier Identifier of the classroomm.
         * @param desks  Number of desks in the classroom.
         * @param projector Shows if the classroom has a projector.
         */
        Classroom(int identifier,int desks,bool projector);
        
        /**
         * @brief To declare the method that get the Identifier object.
         * 
         * @return int Identififier of the classroom.
         */
        int getIdentifier() const;

        /**
         * @brief To declare the method that get the Desks object.
         * 
         * @return int Number of desks in the classroom.
         */
        int getDesks() const;

        /**
         * @brief To declare the method that get the Projector object
         * 
         * @return true If the classroom has a projector
         * @return false If the classroom doesn't have a projector
         */
        bool getProjector() const;
        
};
#endif //Classroom.hpp
