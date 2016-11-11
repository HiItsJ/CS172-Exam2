//
//  City.cpp
//  Exam2
//
//  Created by Josiah on 11/10/16.
//  Copyright © 2016 Josiah. All rights reserved.
//

// I affirm that all code given below was written solely by me, Josiah Gallegos, and that any help I received adhered to the rules stated for this exam.

#include <fstream>
#include "City.hpp"

City::City(string cityName){
    string fileName = cityName + ".txtx";
    theCityName = cityName;
    ifstream fin(fileName, ios::out);
    fin.open(fileName);
    for (int x = 0; !fin.eof(); x++){
        fin>>citizenList[x];
    }
}
City::~City(){
    string fileName = theCityName + ".txt";
    ofstream fout(fileName, ios::in);
    fout.open(fileName);
    for (int x = 0; x<citizenList.size(); x++){
        fout << citizenList[x];
    }
    fout.close();
}
string City::getCityName(){
    return theCityName;
}
int City::populationSize(){
    return citizenList.size();
}
Citizen* City::getCitizenAtIndex(int index){
    return citizenList[index];
}
void City::addCitizen(Citizen *citizen){
    citizenList.push_back(citizen);
}
Citizen* City::getCitizenWithId(int id){
    for (int x = 0; x<citizenList.size(); x++){
        if (citizenList[x]->getId() == id){
            return citizenList[x];
        }
    }
    return citizenList[0];
}
vector<Citizen*> City::getCitizensForFavoriteColor(string color){
    vector<Citizen*> citizenColor;
    for (int x = 0; x<citizenList.size(); x++){
        if (citizenList[x]->getFavoriteColor() == color){
            citizenColor.push_back(citizenList[x]);
        }
    }
    return citizenColor;
}
