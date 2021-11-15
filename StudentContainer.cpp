//
// Created by jesse on 11/5/2021.
//

#include "StudentContainer.h"


StudentContainer::StudentContainer() = default;

StudentContainer::StudentContainer(vector<Student> setStudents) : students(move(setStudents)){
    ;
}

vector<Student> StudentContainer::getStudentsVector() {
    return this->students;
}

Student StudentContainer::getStudentAt(int i) {
    return this->students.at(i);
}

unsigned long StudentContainer::getStudentsSize() {
    return this->students.size();
}

void StudentContainer::setStudentsVector(vector<Student> setStudents) {
    this->students = move(setStudents);
}

void StudentContainer::setStudentAt(Student setStudent, int i) {
    this->students.at(i) = move(setStudent);
}


bool StudentContainer::verifyCSVHeader(const string &lineToParse) {
    bool correctData = true;
    stringstream lineStream(lineToParse);
    string tempString;

    getline(lineStream, tempString, ',');
    if (tempString != "school") {
        return false;
    }
    getline(lineStream, tempString, ',');
    if (tempString != "sex") {
        return false;
    }
    getline(lineStream, tempString, ',');
    if (tempString != "age") {
        return false;
    }
    getline(lineStream, tempString, ',');
    if (tempString != "address") {
        return false;
    }
    getline(lineStream, tempString, ',');
    if (tempString != "famsize") {
        return false;
    }
    getline(lineStream, tempString, ',');
    if (tempString != "Pstatus") {
        return false;
    }
    getline(lineStream, tempString, ',');
    if (tempString != "Medu") {
        return false;
    }
    getline(lineStream, tempString, ',');
    if (tempString != "Fedu") {
        return false;
    }
    getline(lineStream, tempString, ',');
    if (tempString != "Mjob") {
        return false;
    }
    getline(lineStream, tempString, ',');
    if (tempString != "Fjob") {
        return false;
    }
    getline(lineStream, tempString, ',');
    if (tempString != "reason") {
        return false;
    }
    getline(lineStream, tempString, ',');
    if (tempString != "guardian") {
        return false;
    }
    getline(lineStream, tempString, ',');
    if (tempString != "traveltime") {
        return false;
    }
    getline(lineStream, tempString, ',');
    if (tempString != "studytime") {
        return false;
    }
    getline(lineStream, tempString, ',');
    if (tempString != "failures") {
        return false;
    }
    getline(lineStream, tempString, ',');
    if (tempString != "schoolsup") {
        return false;
    }
    getline(lineStream, tempString, ',');
    if (tempString != "famsup") {
        return false;
    }
    getline(lineStream, tempString, ',');
    if (tempString != "paid") {
        return false;
    }
    getline(lineStream, tempString, ',');
    if (tempString != "activities") {
        return false;
    }
    getline(lineStream, tempString, ',');
    if (tempString != "nursery") {
        return false;
    }
    getline(lineStream, tempString, ',');
    if (tempString != "higher") {
        return false;
    }
    getline(lineStream, tempString, ',');
    if (tempString != "internet") {
        return false;
    }
    getline(lineStream, tempString, ',');
    if (tempString != "romantic") {
        return false;
    }
    getline(lineStream, tempString, ',');
    if (tempString != "famrel") {
        return false;
    }
    getline(lineStream, tempString, ',');
    if (tempString != "freetime") {
        return false;
    }
    getline(lineStream, tempString, ',');
    if (tempString != "goout") {
        return false;
    }
    getline(lineStream, tempString, ',');
    if (tempString != "Dalc") {
        return false;
    }
    getline(lineStream, tempString, ',');
    if (tempString != "Walc") {
        return false;
    }
    getline(lineStream, tempString, ',');
    if (tempString != "health") {
        return false;
    }
    getline(lineStream, tempString, ',');
    if (tempString != "absences") {
        return false;
    }
    getline(lineStream, tempString, ',');
    if (tempString != "G1") {
        return false;
    }
    getline(lineStream, tempString, ',');
    if (tempString != "G2") {
        return false;
    }
    getline(lineStream, tempString, ',');
    if (tempString != "G3") {
        return false;
    }
    return correctData;
}



Student StudentContainer::parseLine(const string& lineToParse, const string& classTitle) {
    Student newStudent;
    string tempString;
    stringstream lineStream(lineToParse);
    newStudent.setSubject(classTitle);
    getline(lineStream, tempString, ','); // string school
    newStudent.setSchool(tempString);
    getline(lineStream, tempString, ','); // char sex
    newStudent.setSex(tempString[0]);
    getline(lineStream, tempString, ','); // int age
    newStudent.setAge(stoi(tempString));
    getline(lineStream, tempString, ','); // char address
    newStudent.setAddress(tempString[0]);
    getline(lineStream, tempString, ','); // string famsize
    newStudent.setFamsize(tempString);
    getline(lineStream, tempString, ','); // char Pstatus
    newStudent.setPstatus(tempString[0]);
    getline(lineStream, tempString, ','); // int Medu
    newStudent.setMedu(stoi(tempString));
    getline(lineStream, tempString, ','); // int Fedu
    newStudent.setFedu(stoi(tempString));
    getline(lineStream, tempString, ','); // string Mjob
    newStudent.setMjob(tempString);
    getline(lineStream, tempString, ','); // string Fjob
    newStudent.setFjob(tempString);
    getline(lineStream, tempString, ','); // string reason
    newStudent.setReason(tempString);
    getline(lineStream, tempString, ','); // string guardian
    newStudent.setGuardian(tempString);
    getline(lineStream, tempString, ','); // int traveltime
    newStudent.setTraveltime(stoi(tempString));
    getline(lineStream, tempString, ','); // int studytime
    newStudent.setStudytime(stoi(tempString));
    getline(lineStream, tempString, ','); // int failures
    newStudent.setFailures(stoi(tempString));
    getline(lineStream, tempString, ','); // bool schoolsup
    newStudent.setSchoolsup(tempString == "yes");
    getline(lineStream, tempString, ','); // bool famsup
    newStudent.setFamsup(tempString == "yes");
    getline(lineStream, tempString, ','); // bool paid
    newStudent.setPaid(tempString == "yes");
    getline(lineStream, tempString, ','); // bool activities
    newStudent.setActivities(tempString == "yes");
    getline(lineStream, tempString, ','); // bool nursery
    newStudent.setNursery(tempString == "yes");
    getline(lineStream, tempString, ','); // bool higher
    newStudent.setHigher(tempString == "yes");
    getline(lineStream, tempString, ','); // bool internet
    newStudent.setInternet(tempString == "yes");
    getline(lineStream, tempString, ','); // bool romantic
    newStudent.setRomantic(tempString == "yes");
    getline(lineStream, tempString, ','); // int famrel
    newStudent.setFamrel(stoi(tempString));
    getline(lineStream, tempString, ','); // int freetime
    newStudent.setFreetime(stoi(tempString));
    getline(lineStream, tempString, ','); // int goout
    newStudent.setGoout(stoi(tempString));
    getline(lineStream, tempString, ','); // int Dalc
    newStudent.setDalc(stoi(tempString));
    getline(lineStream, tempString, ','); // int Walc
    newStudent.setWalc(stoi(tempString));
    getline(lineStream, tempString, ','); // int health
    newStudent.setHealth(stoi(tempString));
    getline(lineStream, tempString, ','); // int absences
    newStudent.setAbsences(stoi(tempString));
    getline(lineStream, tempString, ','); // int G1
    newStudent.setG1(stoi(tempString));
    getline(lineStream, tempString, ','); // int G2
    newStudent.setG2(stoi(tempString));
    getline(lineStream, tempString, ','); // int G3
    newStudent.setG3(stoi(tempString));
    return newStudent;
}

bool StudentContainer::readFileCSV(const string& filePath, const string& classTitle) {
    ifstream inputFile;
    inputFile.open(filePath);
    if (!inputFile.is_open()) {
        cerr << "Error reading file. Please check input file path." << endl;
        return false;
    }
    string nextLine;
    getline(inputFile, nextLine);
    if (!verifyCSVHeader(nextLine)) {
        cerr << "First line of file does not match template. Please check input file path." << endl;
        return false;
    }
    while (!inputFile.eof()) {
        getline(inputFile, nextLine);
        if (!nextLine.empty()) {
            this->students.push_back(parseLine(nextLine, classTitle));
        }
    }
    return true;
}


// string subject, string school, char sex, int age, char address, string famsize,char Pstatus, int Medu, int Fedu,
// string Mjob, string Fjob, string reason, string guardian, int traveltime, int studytime, int failures,
// bool schoolsup, bool famsup, bool paid, bool activities, bool nursery, bool higher, bool internet, bool romantic,
// int famrel, int freetime,int goout, int Dalc, int Walc, int health, int absences, int G1, int G2, int G3

