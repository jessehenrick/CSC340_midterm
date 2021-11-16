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
    // default
    explicit StudentContainer(vector <Student> setStudents);
    // vector argument constructor

    // getters

    vector <Student> getStudentsVector();
    // returns the StudentContainer.students vector
    Student getStudentAt(int i);
    // returns the student at index i of StudentContainer.students
    unsigned long getStudentsSize();
    // returns the size of the StudentContainer.students vector


    // setters

    void setStudentsVector(vector <Student> setStudents);
    // sets the StudentContainer.students vector
    void setStudentAt(Student setStudent, int i);
    // assigns the setStudent to StudentContainer.students.at(i)
    void addStudent(Student studentToAdd);
    // appends a new student object to the end of the StudentContainer.students vector


    // member functions

    static bool verifyCSVHeader(const string& lineToParse);
    // checks if first line of file matches the template for student data .csv's
    static Student parseLine(const string& lineToParse, const string& classTitle);
    // returns a student object constructed from a string, in standard comma
    bool readFileCSV(const string& filePath, const string& classTitle);
    // populates StudentContainer object with contents of student CSV file

    // filter functions
    // return a StudentContainer object containing the subset of students with variable = argument

    StudentContainer filterPstatus(char Pstatus);
    // returns container full of students wtih Pstatus = char Pstatus
    StudentContainer filterInternet(bool hasInternet);
    // returns container full of students with internet = bool hasInternet
    StudentContainer filterSex(char maleOrFemale);
    // returns container full of students with sex = char maleOrFemale
    StudentContainer filterPMedu(int education);
    // expect implementation post Alpha release
    StudentContainer filterPMjob(string job);
    // expect implementation post Alpha release


    // statistical functions

    void printDalcStats();
    // prints mean, standard deviation, median and mode for variable Dalc
    void printWalcStats();
    // prints mean, standard deviation, median and mode for variable Walc
    void printAgeMakeupWithStats();
    // prints stats for each discrete age value in the data set
    double getAverageDalc();
    // depreciated by printAgeMakeupWithStats
    double getAverageWalc();
    // depreciated by printAgeMakeupWithStats
    Student generateMeanAndModeStudent();
    // expect implementation post Alpha release
    Student generateMedianAndModeStudent();
    // expect implementation post Alpha release



};


#endif //CSC340_MIDTERM_STUDENTCONTAINER_H
