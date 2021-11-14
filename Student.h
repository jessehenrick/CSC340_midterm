//
// Created by jesse on 11/5/2021.
//

#ifndef CSC340_MIDTERM_STUDENT_H
#define CSC340_MIDTERM_STUDENT_H


class Student {
public:
    Student();
    double ProbOfAge(double size,std::vector<double> sett);
    double getProbabilityOfSchool();
    double getProbGender();
    double getProbOfHomeType();
    void getMostFreqAgeOfDrinker();
    void getProbabilityOfSchoolAndGender();
    void setsizeofvect(double size);

private:
    int sizeofvect;
};


#endif //CSC340_MIDTERM_STUDENT_H
