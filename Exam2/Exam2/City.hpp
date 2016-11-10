//
//  City.hpp
//  Exam2
//
//  Created by Josiah on 11/10/16.
//  Copyright © 2016 Josiah. All rights reserved.
//

// I affirm that all code given below was written solely by me, Josiah Gallegos, and that any help I received adhered to the rules stated for this exam.

#ifndef City_hpp
#define City_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include "Citizen.cpp"

using namespace std;

class City{
private:
    string theCityName;
    vector<Citizen*> citizenList;
public:
    City(string cityName);
    ~City();
    string getCityName();
    int populationSize();
    Citizen* getCitizenAtIndex(int index);
    void addCitizen(Citizen* citizen);
    Citizen* getCitizenWithId(int id);
    vector<Citizen*> getCitizensForFavoriteColor(string color);
};

#endif /* City_hpp */
