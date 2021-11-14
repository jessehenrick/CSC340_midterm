#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include "ListClass.h"
#include "Student.h"
using namespace std;

int showMenu(double size,vector<double> sett){
    char userInput;

   Student dataMover;

    while(true){
        cout<<endl<<endl<<"*MENU*\n\n1- Probability Of Male Drinkers\n2- Probability Of Female Drinkers\n3- Probability Of Age Chosen To Be Underaged Drinking (15-19)\n4- School With The Higher Rate of Underage Drinking\n5- Most Frequent Age of Drinker Between Both Schools \n6- Profile of the student most likely to drink\n7- Most Probable Home Type To Drink\nq- Quit"<<endl<<endl;
        cin>>userInput;
        switch(userInput){
            case '1':


                cout<<"option 1"<<endl;
                dataMover.getProbGender();
                break;

            case '2':
                cout<<"option 2"<<endl;
                dataMover.getProbGender();
                break;

            case '3':
                cout<<"option 3"<<endl;
                dataMover.ProbOfAge(size,sett);
                break;

            case '4':
                cout<<"option 4"<<endl;
                break;
            case '5':
                cout<<"option 5"<<endl;
                break;
            case '6':
                cout<<"option 6"<<endl;
                break;
            case '7':
                cout<<"option 7"<<endl;
                break;
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
            getline(ss, buffer, ',');
            list.addtoFamSizeVec(buffer);


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
    //I used the file path in my PC bc it works, but idk if it'll work on other devices, so i guess this
    // has to be changed on future implementations.
    getFileData("C:/Users/Joseph Gorny/Documents/Midterm Project/student_data/student-mat.csv",listClass);
    getFileData("C:/Users/Joseph Gorny/Documents/Midterm Project/student_data/student-por.csv",listClass);

    double setSize = listClass.getsizeofage();

    vector<double> setvect = listClass.get_ageVec();
    listClass.printData();
    seter.setsizeofvect(setSize);
    showMenu(setSize,setvect);

    return 0;
}