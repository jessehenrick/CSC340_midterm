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
//object
ListClass dataMoveR;

//constructor
Student::Student() {}

void Student::setsizeofvect(double size) {

    sizeofvect = size;
    cout << size<<" "<< sizeofvect<<endl;
}

double Student::ProbOfAge(double size,vector<double> sett){
    //double probability = 0.00;
    //double probability = 0;
    double probability = 0.00;
    cout << "choose from the age of 15 to 19";
    int input = 0;
    cin >> input;
    while(input < 14 || input > 19){
        cout << "try again select an age from 15 to 19" << endl;
        input = 0;
        cin >> input;

    }
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


    cout << "probability of a student drinking at age " << input << " is: " << probability<<"% "<<endl;
    return probability;
}

double Student::getProbabilityOfSchool(double size, vector<string> setvect2){
    double probability = 0.00;
    cout << "choose GP for Gabriel Pereira or MS for Mousinho da Silveira";
    string input;
    cin.ignore();
    getline(cin, input);
    while(input != "MS" && input != "GP") {
        input = "";
        std::cout << "Invalid input; please re-enter.\n";
        getline(cin, input);
    }
    if(input == "GP" || input == "MS"){
        basic_string<char> tempInput;
        tempInput = input;
        double limit = size;
        double counter = 0;
        vector<string> limitvec = setvect2;
        for (int i = 0; i < limit; i++){
            if(limitvec.at(i) == tempInput){
                counter++;
            }
        }

        probability = (counter/size) * 100;
        cout << "probability of a student drinking at school " << input << " is: " << probability << "%" << endl;
    }
    return probability;
}

double Student::getProbGender(double size,vector<string> vectsex){
    double probability = 0.00;
    char input;
    cout << "choose M for Male or F for Female";
    cin >> input;
    while(input != 'M' && input != 'F') {
        input = ' ';
        std::cout << "Invalid input; please re-enter.\n";
        cin >> input;
    }
    if(input == 'M' || input == 'F'){
        basic_string<char> tempInput;
        tempInput = input;
        double counter = 0;
        for( int i = 0; i < size; i++){
            if(vectsex.at(i) == tempInput){
                counter++;
            }
        }
        probability = (counter/size) *100;
        cout << "probability of a student drinking of sex from both schools " << input << " is: " << probability<<"%"<<endl;

    }
    return probability;
}

double Student::getProbOfHomeType(double size, vector<string>vecthome){
    double probability = 0.00;
    cout << "\nchoose U for urban and R for rural";
    char input;
    cin >> input;
    while(input != 'U' && input != 'R') {
        input = ' ';
        std::cout << "Invalid input; please re-enter.\n";
        cin >> input;
    }
    if(input == 'U' || input == 'R'){
        basic_string<char> tempInput;
        tempInput = input;
        int counter = 0;
        for (int i = 0; i < size; i++){
            if(vecthome.at(i) == tempInput){
                counter++;
            }
        }
        probability = (counter/size) * 100;
        cout << "probability of a student drinking of home type " << input << " is: " << probability << "%" << endl;
    }
    return probability;
}

//concludes whats written on 11/8
//logial operations change on 11/12
//start of more complex algorithms




double Student::getProbGenderSet(string sex,double size, vector<string> setvectsex){
    double probability = 0.00;
    basic_string<char> tempInput;
    tempInput = sex;
    int counter = 0;
    for( int i = 0; i < size; i++){
        if(setvectsex.at(i) == tempInput){
            counter++;
        }
    }
    probability = (counter/size);
    return probability;
}

double Student::getProbabilityOfSchoolSet(string school, double size, vector<string>setvect2){
    double probability = 0.00;
    string tempInput;
    tempInput = school;
    int counter = 0;
    for (int i = 0; i < size; i++){
        if(setvect2.at(i) == tempInput){
            counter++;
        }
    }

    probability = (counter/size);
    return probability;
}
// probability * probability = probability of dependent event
void Student::getProbabilityOfSchoolAndGender(double size, vector<string> setvectsex,vector<string> setvect2){

    double tempProb1 = getProbabilityOfSchoolSet("GP",size,setvect2);
    double tempProb2 = getProbabilityOfSchoolSet("MS",size,setvect2);
    double tempProb3 = getProbGenderSet("M",size,setvectsex);
    double tempProb4 = getProbGenderSet("F",size,setvectsex);


    //choose gender
    cin.ignore(1024,'\n');
    cout << "Choose a Gender M for male F for Female";
    char choiceA;
    cin >> choiceA;
    //cout << "press enter again" << endl;
    //cin.ignore(1024,'\n');
    //choose school
    while(choiceA != 'M' && choiceA != 'F') {
        choiceA = ' ';
        std::cout << "Invalid input; please re-enter.\n";
        cin >> choiceA;
    }
    cin.ignore(1024,'\n');
    //choose school
    cout << "Choose a School GP for gabriel pereira and MS for mousinho da silveira";
    string choiceB;
    getline(cin, choiceB);
    while(choiceB != "GP" && choiceB != "MS") {
        choiceB = " ";
        std::cout << "Invalid input; please re-enter.\n";
        cin >> choiceB;
    }
        double newProbability = 0.00;
        //probability of student being male and goes to gabriel pereira
        if(choiceA == 'M' && choiceB == "GP"){
            //cout << "entered if else 1";
            newProbability = (tempProb3 * tempProb1) * 100;
            cout << "the probability of a student being male and going to gabriel pereira is:" << newProbability << "%" << endl;
        }
            //probability of student being male and going to mousinho da silveira
        if(choiceA == 'M' && choiceB == "MS"){
            //cout << "entered if else 2";
            newProbability = (tempProb3 * tempProb2) * 100;
            cout << "the probability of a student being male and going to mousinho da silveira is:" << newProbability << "%" << endl;
        }
            //probability of student being female and going to gabriel pereira
        else if(choiceA == 'F' && choiceB == "GP"){
            //cout << "entered if else 3";
            newProbability = (tempProb4 * tempProb1) * 100;
            cout << "the probability of a student being female and going to gabriel pereira is:" << newProbability << "%" << endl;
        }
        else if(choiceA == 'F' && choiceB == "MS"){
            //cout << "entered if else 4";
            newProbability = (tempProb4 * tempProb2) * 100;
            cout << "the probability of a student being female and going to mousinho da silveira is:" << newProbability << "%" << endl;
        }

}

