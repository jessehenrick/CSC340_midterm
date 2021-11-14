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

using namespace std;

//calling list class function says its a call to non static function member without object argument will make object later which i think is the issue
ListClass dataMoveR;

Student::Student() {}

void Student::setsizeofvect(double size) {

    sizeofvect = size;
    cout << size<<" "<< sizeofvect<<endl;
}

double Student::ProbOfAge(double size,vector<double> sett){
    //double probability = 0.00;
    //double probability = 0;
    double probability = 18.5;
    cout << "choose from the age of 15 to 19";
    int input = 0;
    cin >> input;
    if(input < 14 || input > 19){
        cout << "try again select an age from 15 to 19";
        cin >> input;
    }
    else{
        double limit = size;
        double counter = 0;
        vector<double> limitvec = sett;
    //cout<<sizeofvect<<endl;
        for(int i = 0; i < limit; i++){
            if(limitvec.at(i) == input){
                counter++;
            }
        }

        probability = (counter/ size) * 100.0;
    }


    cout << "probability of a student drinking at age " << input << " is: " << probability<<"% "<<endl;
    return probability;
}

double Student::getProbabilityOfSchool(){
    double probability = 0.00;
    cout << "choose g for Gabriel Pereira or m for Mousinho da Silveira";
    char input;
    cin >> input;
    if(input == 'g' || input == 'm'){
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
    else{
        cout << "try again choose g for Gabriel Pereira or m for Mousinho da Silveira";
        cin >> input;
    }
    return probability;
}

double Student::getProbGender(){
    double probability = 0.00;
    char input;
    cout << "choose m for Male or f for Mousinho da Silveira";
    cin >> input;
    if(input == 'm' || input == 'f'){
        basic_string<char> tempInput;
        tempInput = input;
        int counter = 0;
        for(long long unsigned int i = 0; i < dataMoveR.get_sexVec().size(); i++){
            if(dataMoveR.get_sexVec().at(i) == tempInput){
                counter++;
            }
        }
        probability = counter/dataMoveR.get_sexVec().size();
        cout << "probability of a student drinking of sex " << input << " is: " << probability;

    }
    else{
        cout << "try again choose f for female or m for male";
        cin >> input;
    }
    return probability;
}

double Student::getProbOfHomeType(){
    double probability = 0.00;
    cout << "choose u for urban and r for rural";
    char input;
    cin >> input;
    if(input == 'u' || input == 'r'){
        basic_string<char> tempInput;
        tempInput = input;
        int counter = 0;
        for (long long unsigned int i = 0; i < dataMoveR.get_addressVec().size(); i++){
            if(dataMoveR.get_addressVec().at(i) == tempInput){
                counter++;
            }
        }

        probability = counter/dataMoveR.get_addressVec().size();
        cout << "probability of a student drinking of home type " << input << " is: " << probability;
    }
    else{
        cout << "try again choose u for urban and r for rural";
        cin >> input;
    }
    return probability;
}

/*void getMostFreqAgeOfDrinker(){
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
//logial operations change on 11/12
//start of more complex algorithms
*/
//probability * probability = probability of dependent event


double getProbGenderSet(char sex){
    double probability = 0.00;
        basic_string<char> tempInput;
        tempInput = sex;
        int counter = 0;
        for(long long unsigned int i = 0; i < dataMoveR.get_sexVec().size(); i++){
            if(dataMoveR.get_sexVec().at(i) == tempInput){
                counter++;
            }
        }
        probability = counter/dataMoveR.get_sexVec().size();
    return probability;
}

double getProbabilityOfSchoolSet(char school){
    double probability = 0.00;

        basic_string<char> tempInput;
        tempInput = school;
        int limit;
        int counter = 0;
        limit = dataMoveR.get_schoolVec().size();
        for (int i = 0; i < limit; i++){
            if(dataMoveR.get_schoolVec().at(i) == tempInput){
                counter++;
            }
        }

        probability = counter/dataMoveR.get_schoolVec().size();


    return probability;
}

void Student::getProbabilityOfSchoolAndGender(){
    double tempProb1 = getProbabilityOfSchoolSet('g');
    double tempProb2 = getProbabilityOfSchoolSet('m');
    double tempProb3 = getProbGenderSet('m');
    double tempProb4 = getProbGenderSet('f');
    cout << "Choose both a gender and a school m for male and f for female and for school choose g for Gabriel Pereira or m for Mousinho da Silveira";
    //choose gender
    char choiceA;
    cin >> choiceA;
    //choose school
    basic_string<char> choiceB;
    cin >> choiceB;
    //if branches to determine what probabilities should be multiplied
    double newProbability = 0.00;
    //probability of student being male and goes to gabriel pereira
    if(choiceA == 'm' && choiceB == "g"){
        newProbability = tempProb3 * tempProb1;
        cout << "the probability of a student being male and going to gabriel pereira is:" << newProbability;
    }
    //probability of student being male and going to mousinho da silveira
    else if(choiceA == 'm' && choiceB == "m"){
        newProbability = tempProb3 * tempProb2;
        cout << "the probability of a student being male and going to mousinho da silveira is:" << newProbability;
    }
    //probability of student being female and going to gabriel pereira
    else if(choiceA == 'f' && choiceB == "g"){
        newProbability = tempProb4 * tempProb1;
        cout << "the probability of a student being female and going to gabriel pereira is:" << newProbability;
    }
    else if(choiceA == 'f' && choiceB == "m"){
        newProbability = tempProb4 * tempProb2;
        cout << "the probability of a student being female and going to mousinho da silveira is:" << newProbability;
    }

}

