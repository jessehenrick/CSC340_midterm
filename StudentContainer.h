//
// Created by jesse on 11/5/2021.
//

#ifndef CSC340_MIDTERM_STUDENTCONTAINER_H
#define CSC340_MIDTERM_STUDENTCONTAINER_H

#include <vector>
#include <sstream>
#include <fstream>
#include <iostream>
#include <cmath>
#include "Student.h"

using std::vector;
using std::move;
using std::stringstream;
using std::ifstream;
using std::cerr;
using std::cout;
using std::endl;


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
    void addStudent(Student studentToAdd);


    // member functions
    static bool verifyCSVHeader(const string& lineToParse);
    static Student parseLine(const string& lineToParse, const string& classTitle);
    bool readFileCSV(const string& filePath, const string& classTitle);
    StudentContainer filterPstatus(char Pstatus);
    StudentContainer filterPMedu(int education);
    StudentContainer filterPMjob(string job);

    // statistical functions
    void printAgeMakeupWithAverageDalcWalc();
    double getAverageDalc();
    double getAverageWalc();
    void printStandardDeviationOfDalcWalc();
    void printMeanMedianModeofDalcWalc();
    Student generateMeanAndModeStudent();
    Student generateMedianAndModeStudent();



};


#endif //CSC340_MIDTERM_STUDENTCONTAINER_H
