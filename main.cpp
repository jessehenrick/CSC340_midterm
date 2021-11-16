#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include "ListClass.h"
#include "Student.h"
using namespace std;

int showMenu(double size,vector<double> sett, vector<string> setvect2, vector<string> vectsex, vector<string> vecthome){
    char userInput;

   Student dataMover;

    while(true){
        cout<<endl<<endl<<"*MENU*\n\n1- Student Profile\n2- Probability Of Drinker's Gender Chosen\n3- Probability Of Age Chosen To Be Under-aged Drinking (15-19)\n4- Probability of Under-aged drinkers at a certain school \n5- Probability of school and gender as a dependent event\n6- Most Probable Home Type To Drink\nq- Quit\nWrite down your option here:";
        cin>>userInput;
        cout<<endl;
        switch(userInput){
            case '1':
//profile
                cout<<"Option 1:"<<endl;
                dataMover.MakeProfile(size, sett, vectsex, setvect2,vecthome);
                break;
//prob of a gender chosen
            case '2':
                cout<<"Option 2:"<<endl;
                dataMover.getProbGender( size, vectsex);
                break;
//prob of chosen age between both schools
            case '3':
                cout<<"Option 3:"<<endl;
                dataMover.ProbOfAge(size,sett);
                break;
//prob of school chosen between all students
            case '4':
                cout<<"Option 4:"<<endl;
                dataMover.getProbabilityOfSchool(size, setvect2);
                break;
//probability of a dependent event
            case '5':
                cout<<"Option 5:"<<endl;
                dataMover.getProbabilityOfSchoolAndGender(size, vectsex, setvect2);
                break;
//prob of home type chosen
            case '6':
                cout<<"Option 6:"<<endl;
                dataMover.getProbOfHomeType(size,vecthome);
                break;
//quit
            case 'q':
                cout<<"Quitting..."<<endl;
                return 0;
            default:
                cout<<"Not a valid option. Try again.";
                break;
        }
    }

}
int printStringVector(vector <string> &vec){
    for(long unsigned int i=0; i<vec.size(); i++){
        cout<<vec.at(i)<<", ";
    }
    cout<<endl<<endl;
    return 0;
}

int printIntVector(vector <int> &vec){
    for(long unsigned int i=0; i<vec.size(); i++){
        cout<<vec.at(i)<<", ";
    }
    cout<<endl<<endl;
    return 0;
}

int getFileData(string fd, ListClass &list){
    //inserts data into ListClass instance

    ifstream inputFile;
    inputFile.open(fd);
    if (!inputFile.is_open()) {
        cout << "Could not open file." << endl;
        return 1; // 1 indicates error
    }
    else {
        string line;
        getline(inputFile,line); //this skips the first line of the input
        getline(inputFile, line);
        while (!inputFile.fail()) {

            stringstream ss(line);
            string buffer;
            //storing in schoolVec
            getline(ss, buffer, ',');
            list.addtoSchoolVec(buffer);

            //storing in sexVec
            getline(ss, buffer, ',');
            list.addtoSexVec(buffer);

            //storing in ageVec
            getline(ss, buffer, ',');
            list.addtoAgeVec(stoi(buffer));

            //storing in addressVec
            getline(ss, buffer, ',');
            list.addtoAddressVec(buffer);

            //storing in famSizeVec
            //getline(ss, buffer, ',');
            //list.addtoFamSizeVec(buffer);


            getline(inputFile, line);

        }
        cout << "Vectors successfully populated with " << list.get_schoolVec().size() << " data points." << endl;
        cout << list.getsizeofage()<<"this is the size of the vector"<<endl;


        return 0;
    }
}

int main() {


    ListClass listClass;
    Student seter;
    //WARING PLEASE CHANGE FILE PATH TO INCLUDED DATA WITH THE PROJECT RATHER THAN DATA DIRECTLY FROM KAGGLE
    //we shortned the data list to make the computation just a little bit faster
    //I used the file path in my PC bc it works, but idk if it'll work on other devices, so i guess this
    // has to be changed per computer.
    getFileData("C:/Users/Jaden Faustino/CSC340_midterm-working/student_data/student-mat.csv",listClass);
    getFileData("C:/Users/Jaden Faustino/CSC340_midterm-working/student_data/student-por.csv",listClass);

    double setSize = listClass.getsizeofage();
    //move file input data into vectors we can use
    vector<double> setvect = listClass.get_ageVec();
    vector<string> setvect2 = listClass.get_schoolVec();
    vector<string> vectsex = listClass.get_sexVec();
    vector<string> vecthome = listClass.get_addressVec();

    //print all taken in data
    listClass.printData();
    seter.setsizeofvect(setSize);
    showMenu(setSize,setvect,setvect2,vectsex, vecthome);

    return 0;
}