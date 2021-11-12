//
// Created by jesse on 11/5/2021.
//
#include <vector>
#include <string>
#include <iostream>
#include "ListClass.h"


ListClass::ListClass() {
}

//object to call functions in other files

ListClass dataMoveR;

std::vector <std::string> ListClass::get_schoolVec() {
    return schoolVec;
}
std::vector <std::string> ListClass::get_sexVec() {
    return sexVec;
}
std::vector <int> ListClass::get_ageVec() {
    return ageVec;
}
std::vector <std::string> ListClass::get_addressVec() {
    return addressVec;
}
std::vector <std::string> ListClass::get_famSizeVec() {
    return famSizeVec;
}

void ListClass::addtoSchoolVec(std::string data){
    schoolVec.push_back(data);
}
void ListClass::addtoSexVec(std::string data){
    sexVec.push_back(data);
}
void ListClass::addtoAddressVec(std::string data){
    addressVec.push_back(data);
}
void ListClass::addtoFamSizeVec(std::string data){
    famSizeVec.push_back(data);
}

void ListClass::addtoAgeVec(int data){
    ageVec.push_back(data);
}

void ListClass::printData() {
    for(long unsigned int i=0; i<schoolVec.size();i++){

        std::cout<<"Row "<<i<<": "<<schoolVec.at(i)<<", "<<sexVec.at(i)<<", "<<ageVec.at(i)<<", "<<addressVec.at(i)<<", "<<famSizeVec.at(i)<<std::endl;
    }
}