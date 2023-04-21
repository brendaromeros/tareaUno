/**
 * @file main.cpp
 * @author Brenda Romero Solano (brenda.romero@ucr.ac.cr)
 * @brief  This is the main class, which serves as the entry point to the program.
 * It initializes the necessary components and kicks off the program logic.
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
#include "main.hpp"


using namespace std;

/**
 * @brief Principal funtion that make the objects to save and shows the information.
 * 
 * @return int If doesn't find any error, return 0.
 */
int main(){
    Campus q("fshf");
    Classroom c(q.createIdentifier(),34,HAS_ELEVATOR);
    Parking p ("Parqueo mariposa",HAS_ELEVATOR);
    Faculty f ("electrica",DOES_NOT_HAVE_ELEVATOR,HAS_Cafeteria);
    f.addClassroom(c,"fifth");
    Classroom c3(q.createIdentifier(),27,DOES_NOT_HAVE_ELEVATOR);
    f.addClassroom(c3,"first");
    Classroom cr(q.createIdentifier(),37,DOES_NOT_HAVE_ELEVATOR);
    Estate e ("Finca Uno",INTERNAL_BUS_PASS);
    f.addClassroom(cr,"fifth");
    e.addFaculty(f);
    e.addParking(p);


    Classroom r(q.createIdentifier(),44,HAS_ELEVATOR);
    Parking pe ("Parqueo mariposa",HAS_ELEVATOR);
    Faculty fe ("electrica",DOES_NOT_HAVE_ELEVATOR,HAS_Cafeteria);
    fe.addClassroom(r,"fifth");
    Classroom c4(q.createIdentifier(),27,DOES_NOT_HAVE_ELEVATOR);
    fe.addClassroom(c4,"first");
    Classroom c7(q.createIdentifier(),37,DOES_NOT_HAVE_ELEVATOR);
    Estate er ("Finca Dos",INTERNAL_BUS_DOES_NOT_PASS);
    f.addClassroom(cr,"fifth");
    er.addParking(pe);
    q.addEstate(e);
    q.addEstate(er);
    q.addEstate(e);
    q.addEstate(er);
    q.addEstate(e);
    q.addEstate(er);

    showAllInformation(q);
    return 0;
}