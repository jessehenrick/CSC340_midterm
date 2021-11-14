//
// Created by jesse on 11/5/2021.
//

#ifndef CSC340_MIDTERM_STUDENT_H
#define CSC340_MIDTERM_STUDENT_H

using namespace std;
class Student {
public:
    Student();
    double ProbOfAge(double size,std::vector<double> sett);
    double getProbabilityOfSchool(double size, std::vector<std::string> setvect2);
    double getProbGender(double size,std::vector<std::string> vectsex);
    double getProbOfHomeType(double size, vector<string>vecthome);
    //void getMostFreqAgeOfDrinker();
    void getProbabilityOfSchoolAndGender(double size, vector<string> setvectsex,vector<string> setvectschool);
    double getProbabilityOfSchoolSet(string school, double size, vector<string>setvectschool);
    double getProbGenderSet(string sex, double size, vector<string>setvectsex);
    void setsizeofvect(double size);

private:
    int sizeofvect;
};


#endif //CSC340_MIDTERM_STUDENT_H
