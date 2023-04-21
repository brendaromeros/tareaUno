/**
 * @file Print.cpp
 * @author Brenda Romero Solano (brenda.romero@ucr.ac.cr)
 * @brief  This is the funtion that prints all the information of an object Campus.
 * @version 0.1
 * @date 2023-04-21
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
#include "Print.hpp"


using namespace std;

    /**
     * @brief This method show all the information in a Campus object. 
     * 
     * @param campus Campus of a university.
     */
    void showAllInformation(Campus campus){
        cout <<"Campus: "<<campus.getName()<< " it has "<< campus.getMaxIndexEstates()+1<< " estates, ";

        for(int i =0; i<=campus.getMaxIndexEstates();i++){
            if (i< campus.getMaxIndexEstates()){
                cout << campus.estates[i].getName()<< ", ";

            }else if (i==campus.getMaxIndexEstates()){
                cout << campus.estates[i].getName()<< "."<<endl;

            }else{
                cout << campus.estates[i].getName()<< " and ";

            }
        }
        campus.busRoute();
        for(int i =0; i<=campus.getMaxIndexEstates();i++){
            campus.estates[i].show();
        }
        for(int i =0; i<=campus.getMaxIndexEstates();i++){
            campus.estates[i].showBuildings();
        }
}