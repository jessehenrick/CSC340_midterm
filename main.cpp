#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

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

int getFileData(string fd, vector <string> &schoolVec, vector <string> &sexVec,
                vector <int> &ageVec, vector <string> &addressVec,
                vector <string> &famSizeVec){
    //IMO, this function should create (and return)
    // a List Class instance with its attributes (the vectors)
    // filled with the input from the file, but I am coding this before the List class is implemented.

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
            schoolVec.push_back(buffer);

            //storing in sexVec
            getline(ss, buffer, ',');
            sexVec.push_back(buffer);

            //storing in ageVec
            getline(ss, buffer, ',');
            ageVec.push_back(stoi(buffer));

            //storing in addressVec
            getline(ss, buffer, ',');
            addressVec.push_back(buffer);

            //storing in famSizeVec
            getline(ss, buffer, ',');
            famSizeVec.push_back(buffer);


            getline(inputFile, line);

        }
        cout << "Vectors successfully populated with " << schoolVec.size() << " data points." << endl;
        /*
        printStringVector(schoolVec);
        printStringVector(sexVec);
        printIntVector(ageVec);
        printStringVector(addressVec);
        printStringVector(famSizeVec);
         */
        return 0;
    }
}

int main() {

    //Vectors to store the data are a variable in main() for now.
    //This is provisional just to make the getFileData function work.
    //I dont know if the vectors will be stored in a class.
    vector <string> schoolVec;
    vector <string> sexVec;
    vector <int> ageVec;
    vector <string> addressVec;
    vector <string> famSizeVec;

    getFileData("C:/Users/pablo/CLionProjects/CSC340_midterm/student_data/student-mat.csv",schoolVec,sexVec,ageVec, addressVec, famSizeVec);
    getFileData("C:/Users/pablo/CLionProjects/CSC340_midterm/student_data/student-por.csv",schoolVec,sexVec,ageVec, addressVec, famSizeVec);


    return 0;
}