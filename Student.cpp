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
//ListClass dataMoveR;

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
    cout << "Choose from the age between 15 - 19."<<endl<<"Write down your option here:";
    int input = 0;
    cin >> input;
    while(input < 14 || input > 19){
        cout << "\\nTry again and select an age between 15 - 19." << endl<<"Write down your option here:" << endl;
        input = 0;
        cin >> input;

    }
        double limit = size;
        double counter = 0;
        vector<double> limitvec = sett;
        for(int i = 0; i < limit; i++){
            if(limitvec.at(i) == input){
                counter++;
            }
        }

        probability = (counter/ size) * 100.0;


    cout << "\nThe probability of a student drinking at age " << input << " is: " << probability<<"%\n\nReturning to Menu...";
    return probability;
}

double Student::getProbabilityOfSchool(double size, vector<string> setvect2){
    double probability = 0.00;
    cout << "Choose a School:\n[GP] for Gabriel Pereira or [MS] for Mousinho da Silveira\nWrite down your option here:";
    string input;
    cin.ignore();
    getline(cin, input);
    //checks input against what we want
    while(input != "MS" && input != "GP") {
        input = "";
        std::cout << "\nInvalid input; please re-enter.\nChoose a School:\n[GP] for Gabriel Pereira or [MS] for Mousinho da Silveira\nWrite down your option here:";
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
        cout << "\nThe probability of a student drinking at school " << input << " is: " << probability << "%\n\nReturning to Menu...";
    }
    return probability;
}

double Student::getProbGender(double size,vector<string> vectsex){
    double probability = 0.00;
    char input;
    cout << "Choose [M] for Male or [F] for Female.\nWrite down your option here:";
    cin >> input;
    while(input != 'M' && input != 'F') {
        input = ' ';
        std::cout << "\nInvalid input; please re-enter.\nChoose [M] for Male or [F] for Female.\nWrite down your option here:";
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
        cout << "\nThe probability of a student drinking of sex from both schools " << input << " is: " << probability<<"%\n\nReturning to Menu...";

    }
    return probability;
}

double Student::getProbOfHomeType(double size, vector<string>vecthome){
    double probability = 0.00;
    cout << "Choose a home-type.\nChoose [U] for Urban and [R] for Rural\nWrite down your option here:";
    char input;
    cin >> input;
    //checks input against what we want
    while(input != 'U' && input != 'R') {
        input = ' ';
        std::cout << "\nInvalid input; please re-enter.\nChoose a home-type.\nChoose [U] for Urban and [R] for Rural\nWrite down your option here:";
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
        cout << "\nThe probability of a student drinking of home type " << input << " is: " << probability << "%.\n\nReturning to Menu...";
    }
    return probability;
}

//concludes whats written on 11/8
//logial operations change on 11/12
//start of more complex algorithms



//below are getters of the helper functions above so we can declare the input rather than the user
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
double Student::getprobofAgeSet(int userInput,double size,vector<double> sett) {

    double student = 0.00;
    double input = userInput;
    double limit = size;
    double counter = 0;
    vector<double> limitvec = sett;
    //cout<<sizeofvect<<endl;
    for(int i = 0; i < limit; i++){
        if(limitvec.at(i) == input){
            counter++;
        }
    }

    student = (counter/ size) * 100.0;
    return student;

}
double  Student::getProbOfHomeTypeSet(char input,double size, vector<string>vecthome){
    double probability = 0.00;
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
    }
    return probability;
}






// probability * probability = probability of dependent event [FIRST COMPLEX ALGORITHM]
void Student::getProbabilityOfSchoolAndGender(double size, vector<string> setvectsex,vector<string> setvect2){

    double tempProb1 = getProbabilityOfSchoolSet("GP",size,setvect2);
    double tempProb2 = getProbabilityOfSchoolSet("MS",size,setvect2);
    double tempProb3 = getProbGenderSet("M",size,setvectsex);
    double tempProb4 = getProbGenderSet("F",size,setvectsex);


    //choose gender
    cin.ignore(1024,'\n');
    cout << "Choose a Gender." << endl << "[M] for Male or [F] for Female"<<endl<<"Write down your option here:";
    char choiceA;
    cin >> choiceA;
    //cout << "press enter again" << endl;
    //cin.ignore(1024,'\n');
    //choose school
    while(choiceA != 'M' && choiceA != 'F') {
        choiceA = ' ';
        std::cout << "Invalid input; please re-enter.\n";
        cout << "Choose a Gender." << endl << "[M] for Male or [F] for Female"<<endl<<"Write down your option here:\n";
        cin >> choiceA;
    }
    cin.ignore(1024,'\n');
    //choose school
    cout << "Choose a School:" << endl;
    cout<< "[GP] for Gabriel Pereira or [MS] for Mousinho da Silveira"<<endl;
    cout <<"Write down your option here:";
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
            cout <<"\nThe probability of a student drinker being male and going to Gabriel Pereira is: " << newProbability << "%.\n\nReturning to Menu..." << endl;
        }
            //probability of student being male and going to mousinho da silveira
        else if(choiceA == 'M' && choiceB == "MS"){
            //cout << "entered if else 2";
            newProbability = (tempProb3 * tempProb2) * 100;
            cout << endl <<"\nThe probability of a student drinker being male and going to Mousinho da Silveira is: " << newProbability << "%.\n\nReturning to Menu..." << endl;
        }
            //probability of student being female and going to gabriel pereira
        else if(choiceA == 'F' && choiceB == "GP"){
            //cout << "entered if else 3";
            newProbability = (tempProb4 * tempProb1) * 100;
            cout << endl <<"\nThe probability of a student drinker being female and going to Gabriel Pereira is: " << newProbability << "%.\n\nReturning to Menu..." << endl;
        }
        else if(choiceA == 'F' && choiceB == "MS"){
            //cout << "entered if else 4";
            newProbability = (tempProb4 * tempProb2) * 100;
            cout << endl <<"\nThe probability of a student drinker being female and going to Mousinho da Silveira is: " << newProbability << "%.\n\nReturning to Menu..." << endl;
        }

}

//Makes profile of student and asks user whether they would to see the traits that are most likely to be in a student drinker and the traits that are least likely by analyzing and comparing values computed by helper functions
// [2nd complex algorithm]
void Student::MakeProfile(double size, vector<double> sett, vector<string> setvectsex,vector<string> setvectschool, vector<string>vecthome) {
    //find probability of each data point taken thats an available option
    double probOfGP = getProbabilityOfSchoolSet("GP", size, setvectschool);
    double probOfMS = getProbabilityOfSchoolSet("MS", size, setvectschool);
    double probOfM = getProbGenderSet("M", size, setvectsex);
    double probOfF = getProbGenderSet("F", size, setvectsex);
    double probOfR = getProbOfHomeTypeSet('R', size, vecthome);
    double probOfU = getProbOfHomeTypeSet('U', size, vecthome);
    double probOf15 = getprobofAgeSet(15, size, sett);
    double probOf16 = getprobofAgeSet(16, size, sett);
    double probOf17 = getprobofAgeSet(17, size, sett);
    double probOf18 = getprobofAgeSet(18, size, sett);
    double probOf19 = getprobofAgeSet(19, size, sett);
    //ask user if they want to see the highest probable traits of a student to drink or the lowest
    cout << "Please enter H to create a profile for a student with most determining drinking factors, or L for \nleast determining factors" << endl;
    char choiceA;
    cin >> choiceA;
    while(choiceA != 'H' && choiceA != 'L') {
        choiceA = ' ';
        std::cout << "Invalid input; please re-enter. Choices are H for highest or L for lowest: \n";
        cin >> choiceA;
    }
    string profile = "Student profile most likely to drink contains the following determining factors: ";
    //compare each probability to find lowest and highest of each category
    if(choiceA == 'H') {
        if(probOfGP > probOfMS) {
            profile = profile + "\nSchool: Gabriel Pereira";
        } else {
            profile = profile + "\nSchool: Mousinho da Silveira";
        }
        if(probOfM > probOfF) {
            profile = profile + "\nGender: Male";
        } else {
            profile = profile + "\nGender: Female";
        }
        if(probOfR > probOfU) {
            profile = profile + "\nHometype: Rural";
        } else {
            profile = profile + "\nHometype: Urban";
        }
        if(probOf15 > probOf16 && probOf15 > probOf17 && probOf15 > probOf18 && probOf15 > probOf19) {
            profile = profile + "\nAge: 15";
        } else if (probOf16 > probOf15 && probOf16 > probOf17 && probOf16 > probOf18 && probOf16 > probOf19) {
            profile = profile + "\nAge: 16";
        } else if (probOf17 > probOf15 && probOf17 > probOf16 && probOf17 > probOf18 && probOf17 > probOf19) {
            profile = profile + "\nAge: 17";
        } else if (probOf18 > probOf15 && probOf18 > probOf17 && probOf18 > probOf16 && probOf18 > probOf19) {
            profile = profile + "\nAge: 18";
        } else if (probOf19 > probOf15 && probOf19 > probOf17 && probOf19 > probOf18 && probOf19 > probOf16) {
            profile = profile + "\nAge: 19";
        }
    }else if(choiceA == 'L') {
        if(probOfGP < probOfMS) {
            profile = profile + "\nSchool: Gabriel Pereira";
        } else {
            profile = profile + "\nSchool: Mousinho da Silveira";
        }
        if(probOfM < probOfF) {
            profile = profile + "\nGender: Male";
        } else {
            profile = profile + "\nGender: Female";
        }
        if(probOfR < probOfU) {
            profile = profile + "\nHometype: Rural";
        } else {
            profile = profile + "\nHometype: Urban";
        }
        if(probOf15 < probOf16 && probOf15 < probOf17 && probOf15 < probOf18 && probOf15 < probOf19) {
            profile = profile + "\nAge: 15";
        } else if (probOf16 < probOf15 && probOf16 < probOf17 && probOf16 < probOf18 && probOf16 < probOf19) {
            profile = profile + "\nAge: 16";
        } else if (probOf17 < probOf15 && probOf17 < probOf16 && probOf17 < probOf18 && probOf17 < probOf19) {
            profile = profile + "\nAge: 17";
        } else if (probOf18 < probOf15 && probOf18 < probOf17 && probOf18 < probOf16 && probOf18 < probOf19) {
            profile = profile + "\nAge: 18";
        } else if (probOf19 < probOf15 && probOf19 < probOf17 && probOf19 < probOf18 && probOf19 < probOf16) {
            profile = profile + "\nAge: 19";
        }
    }
    cout << profile << endl;
}


