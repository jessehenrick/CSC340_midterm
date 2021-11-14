//
// Created by jesse on 11/5/2021.
//

#ifndef CSC340_MIDTERM_STUDENT_H
#define CSC340_MIDTERM_STUDENT_H

#include <string>
#include <iostream>

using std::string;
using std::ostream;
using std::to_string;
using std::boolalpha;

class Student {
private:
    string subject;
    // Which class this student is from ("Math", "Portuguese")
    string school;
    // student's school ("GP": Gabriel Pereira, "MS": Mousinho da Silveira)
    char sex;
    // student's sex ("F": female, "M": male)
    int age;
    // student's age (from 15 to 22)
    char address;
    // student's home address type ("U": urban, "R": rural)
    string famsize;
    // Family size ("LE3": less than or equal to 3, "GT3": greater than 3)
    char Pstatus;
    // Parent's cohabitation status ("T": living together, "A": living apart)
    int Medu;
    // Mother's education (0: none, 1: primary education - 4th grade, 2: 5th to 9th grade, 3: secondary)
    int Fedu;
    // Father's education (0: none, 1: primary education - 4th grade, 2: 5th to 9th grade, 3: secondary)
    string Mjob;
    // Mother's job ("teacher", "health" care related, civil "services", "at_home", "other")
    string Fjob;
    // Father's job ("teacher", "health" care related, civil "services", "at_home", "other")
    string reason;
    // Reason to choose this school (close to "home", school "reputation", "course" preference, "other")
    string guardian;
    // Student's guardian ("mother", "father", "other")
    int traveltime;
    // Home to school travel time (1: less than 15 min, 2: 15 to 30 min, 3: 30 min to 1 hr, 4: greater than 1 hr)
    int studytime;
    // Weekly study time (1: less than 2 hr, 2: 2 to 5 hr, 3: 5 to 10 hr, 4: greater than 10 hr)
    int failures;
    // Number of past class failures (integer value)
    bool schoolsup;
    // Extra educational support (yes / no)
    bool famsup;
    // Family educational support (yes / no)
    bool paid;
    // Extra paid classes within the course subject (yes / no)
    bool activities;
    // Extra-curricular activities (yes / no)
    bool nursery;
    // Attended nursery school (yes / no)
    bool higher;
    // Wants to take higher education (yes / no)
    bool internet;
    // Internet access at home (yes / no)
    bool romantic;
    // With a romantic relationship (yes / no)
    int famrel;
    // Quality of family relationships (1: very bad, . . . 5: excellent)
    int freetime;
    // Free time after school (1: very low, . . . 5: very high)
    int goout;
    // Going out with friends (1: very low, . . . 5: very high)
    int Dalc;
    // Workday alcohol consumption (1: very low, . . . 5: very high)
    int Walc;
    // Weekend alcohol consumption (1: very low, . . . 5: very high)
    int health;
    // Current health status (1: very bad, . . . 5: very good)
    int absences;
    // Number of school absences (integer value, 0 to 93)
    int G1;
    // First period grade (integer value, 0 to 20)
    int G2;
    // Second period grade (integer value, 0 to 20)
    int G3;
    // Final grade (integer value, 0 to 20)


public:
    // constructors
    explicit Student(string setSubject = "none",
                     string setSchool = "none",
                     char setSex = 'N',
                     int setAge = 0,
                     char setAddress = 'N',
                     string setFamsize = "none",
                     char setPstatus = 'N',
                     int setMedu = 0,
                     int setFedu = 0,
                     string setMjob = "none",
                     string setFjob = "none",
                     string setReason = "none",
                     string setGuardian = "none",
                     int setTraveltime = 0,
                     int setStudytime = 0,
                     int setFailures = 0,
                     bool setSchoolsup = false,
                     bool setFamsup = false,
                     bool setPaid = false,
                     bool setActivities = false,
                     bool setNursery = false,
                     bool setHigher = false,
                     bool setInternet = false,
                     bool setRomantic = false,
                     int setFamrel = 0,
                     int setFreetime = 0,
                     int setGoout = 0,
                     int setDalc = 0,
                     int setWalc = 0,
                     int setHealth = 0,
                     int setAbsences = 0,
                     int setG1 = 0,
                     int setG2 = 0,
                     int setG3 = 0);




    // getters
    string getSubject();
    string getSchool();
    char getSex();
    int getAge();
    char getAddress();
    string getFamsize();
    char getPstatus();
    int getMedu();
    int getFedu();
    string getMjob();
    string getFjob();
    string getReason();
    string getGuardian();
    int getTraveltime();
    int getStudyTime();
    int getFailures();
    bool getSchoolsup();
    bool getFamsup();
    bool getPaid();
    bool getActivities();
    bool getNursery();
    bool getHigher();
    bool getInternet();
    bool getRomantic();
    int getFamrel();
    int getFreetime();
    int getGoout();
    int getDalc();
    int getWalc();
    int getHealth();
    int getAbsences();
    int getG1();
    int getG2();
    int getG3();

    // setters

    void setSubject(const string& setSubject);
    void setSchool(const string& setSchool);
    void setSex(char setSex);
    void setAge(int setAge);
    void setAddress(char setAddress);
    void setFamsize(const string& setFamsize);
    void setPstatus(char setPstatus);
    void setMedu(int setMedu);
    void setFedu(int setFedu);
    void setMjob(const string& setMjob);
    void setFjob(const string& setFjob);
    void setReason(const string& setReason);
    void setGuardian(const string& setGuardian);
    void setTraveltime(int setTraveltime);
    void setStudytime(int setStudytime);
    void setFailures(int setFailures);
    void setSchoolsup(bool setSchoolsup);
    void setFamsup(bool setFamsup);
    void setPaid(bool setPaid);
    void setActivities(bool setActivities);
    void setNursery(bool setNursery);
    void setHigher(bool setHigher);
    void setInternet(bool setInternet);
    void setRomantic(bool setRomantic);
    void setFamrel(int setFamrel);
    void setFreetime(int setFreetime);
    void setGoout(int setGoout);
    void setDalc(int setDalc);
    void setWalc(int setWalc);
    void setHealth(int setHealth);
    void setAbsences(int setAbsences);
    void setG1(int setG1);
    void setG2(int setG2);
    void setG3(int setG3);


    // overloads

    ostream& operator << (ostream& out);


    // member functions



};
// string subject, string school, char sex, int age, char address, string famsize,char Pstatus, int Medu, int Fedu,
// string Mjob, string Fjob, string reason, string guardian, int traveltime, int studytime, int failures,
// bool schoolsup, bool famsup, bool paid, bool activities, bool nursery, bool higher, bool internet, bool romantic,
// int famrel, int freetime,int goout, int Dalc, int Walc, int health, int absences, int G1, int G2, int G3


#endif //CSC340_MIDTERM_STUDENT_H
