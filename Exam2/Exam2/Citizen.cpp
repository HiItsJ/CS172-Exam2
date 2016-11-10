//
//  Citizen.cpp
//  Exam2
//
//  Created by Josiah on 11/10/16.
//  Copyright © 2016 Josiah. All rights reserved.
//

// I affirm that all code given below was written solely by me, Josiah Gallegos, and that any help I received adhered to the rules stated for this exam.

#include "Citizen.hpp"

Citizen::Citizen(int id, string firstName, string lastName, string color){
    citID = id;
    citFirstName = firstName;
    citLastName = lastName;
    favColor = color;
}
Citizen::Citizen(Citizen* citizen){
    citID = citizen->getId();
    citFirstName = citizen->getFirstName();
    citLastName = citizen->getLastName();
    favColor = citizen->getFavoriteColor();
}
string Citizen::getFirstName(){
    return citFirstName;
}
string Citizen::getLastName(){
    return citLastName;
}
int Citizen::getId(){
    return citID;
}
string Citizen::getFavoriteColor(){
    return favColor;
}
void Citizen::setFavoriteColor(string color){
    favColor = color;
}
