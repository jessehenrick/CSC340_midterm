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



bool StudentContainer::parseLine(const string& lineToParse) {
    bool success = true;
    stringstream lineStream(lineToParse);




    return success;
}

bool StudentContainer::readFileCSV(const string& filePath, const string& classTitle) {
    bool success = true;




    return success;
}





