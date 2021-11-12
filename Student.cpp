//
// Created by jesse on 11/5/2021.
//
//below written by Jonathan Bird on 11/8
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Student.h"
#include "ListClass.h"
#include "ListClass.cpp"
using namespace std;

//calling list class function says its a call to non static function member without object argument will make object later which i think is the issue

double probOfAge(int age){
    double probability = 0.00;
    cout << "choose from the age of 15 to 19";
    int input = 0;
    cin >> input;
    if(input < 15 || input > 19){
        cout << "try again select an age from 15 to 19";
        cin >> input;
    }
    else{
        int limit;
        int counter = 0;
        limit = dataMoveR.get_ageVec().size();
        for(int i = 0; i < limit; i++){
            if(dataMoveR.get_ageVec().at(i) == input){
                counter++;
            }
        }
        probability = counter/dataMoveR.get_ageVec().size();
        cout << "probability of a student drinking at age " << input << " is: " << probability;
    }
    return probability;
}

double getMostProbableSchool(){
    double probability = 0.00;
    cout << "choose g for Gabriel Pereira or m for Mousinho da Silveira";
    char input;
    cin >> input;
    if(input != 'g' || input != 'm'){
        cout << "try again choose g for Gabriel Pereira or m for Mousinho da Silveira";
        cin >> input;
    }
    else{
        basic_string<char> tempInput;
        tempInput = input;
        int limit;
        int counter = 0;
        limit = dataMoveR.get_schoolVec().size();
        for (int i = 0; i < limit; i++){
            if(dataMoveR.get_schoolVec().at(i) == tempInput){
                counter++;
            }
        }

    probability = counter/dataMoveR.get_schoolVec().size();
    cout << "probability of a student drinking at school " << input << " is: " << probability;
    }
    return probability;
}

double getProbGender(){
    double probability = 0.00;
    char input;
    cin >> input;
    if(input != 'm' || input != 'f'){
        cout << "try again choose f for female or m for male";
        cin >> input;
    }
    else{
        basic_string<char> tempInput;
        tempInput = input;
        int counter = 0;
        for(int i = 0; i < dataMoveR.get_sexVec().size(); i++){
            if(dataMoveR.get_sexVec().at(i) == tempInput){
                counter++;
            }
        }
        probability = counter/dataMoveR.get_sexVec().size();
        cout << "probability of a student drinking of sex " << input << " is: " << probability;

    }
    return probability;
}

double getProbOfHomeType(){
    double probability = 0.00;
    cout << "choose u for urban and r for rural";
    char input;
    cin >> input;
    if(input != 'u' || input != 'r'){
        cout << "try again choose u for urban and r for rural";
        cin >> input;
    }
    else{
        basic_string<char> tempInput;
        tempInput = input;
        int counter = 0;
        for (int i = 0; i < dataMoveR.get_addressVec().size(); i++){
            if(dataMoveR.get_addressVec().at(i) == tempInput){
                counter++;
            }
        }

        probability = counter/dataMoveR.get_addressVec().size();
        cout << "probability of a student drinking of home type " << input << " is: " << probability;
    }
    return probability;
}

void getMostFreqAgeOfDrinker(){
    double tempProb1 = probOfAge(15);
    double tempProb2 = probOfAge(16);
    double tempProb3 = probOfAge(17);
    double tempProb4 = probOfAge(18);
    double tempProb5 = probOfAge(19);
    double probabilities[] = {tempProb1, tempProb2, tempProb3, tempProb4, tempProb5};
    //pre declare temp value before loop
    double placeholder = 0.00;
    //nested loop to count through array to sort in an ascending order
    for(int i = 0; i < 4; i++){
        for(int j = i + 1; j < 4; j++){
            if(probabilities[i] > probabilities[j]){
                placeholder = probabilities[i];
                probabilities[i] = probabilities[j];
                probabilities[j] = placeholder;
            }
        }

    }
    cout << "The most probable age of drinker between both schools is: " << tempProb5;

}
//concludes whats written on 11/8



