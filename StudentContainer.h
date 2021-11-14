//
// Created by jesse on 11/5/2021.
//

#ifndef CSC340_MIDTERM_STUDENTCONTAINER_H
#define CSC340_MIDTERM_STUDENTCONTAINER_H

#include <vector>
#include <sstream>
#include "Student.h"

using std::vector;
using std::move;
using std::stringstream;


class StudentContainer {

private:
    vector <Student> students;

public:
    // constructors
    StudentContainer();
    explicit StudentContainer(vector <Student> setStudents);

    // getters
    vector <Student> getStudentsVector();
    Student getStudentAt(int i);
    unsigned long getStudentsSize();


    // setters

    void setStudentsVector(vector <Student> setStudents);
    void setStudentAt(Student setStudent, int i);

    // member functions

    static bool verifyCSVHeader(const string& lineToParse);
    bool parseLine(const string& lineToParse);
    bool readFileCSV(const string& filePath, const string& classTitle);


};


#endif //CSC340_MIDTERM_STUDENTCONTAINER_H
