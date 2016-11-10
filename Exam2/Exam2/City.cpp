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
    theCityName = cityName;
    string fileName = cityName + ".txt";
    ofstream fout(fileName, ios::in);
    fout.open(fileName);
    for(int x = 0; x<citizenList.size(); x++){
        fout << citizenList[x];
    }
    fout.close(fileName);
}
City::~City(){
    
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
    
}
vector<Citizen*> City::getCitizensForFavoriteColor(string color){
    vector<Citizen*> citizenColor;
    
}
