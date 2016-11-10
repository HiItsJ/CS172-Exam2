//
//  Citizen.hpp
//  Exam2
//
//  Created by Josiah on 11/10/16.
//  Copyright © 2016 Josiah. All rights reserved.
//

// I affirm that all code given below was written solely by me, Josiah Gallegos, and that any help I received adhered to the rules stated for this exam.

#ifndef Citizen_hpp
#define Citizen_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Citizen{
private:
    int citID;
    string citFirstName;
    string citLastName;
    string favColor;
public:
    Citizen(int id, string firstName, string lastName, string color);
    Citizen(Citizen* citizen);
    string getFirstName();
    string getLastName();
    int getId();
    string getFavoriteColor();
    void setFavoriteColor(string color);
};

#endif /* Citizen_hpp */
