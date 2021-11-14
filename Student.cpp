//
// Created by jesse on 11/5/2021.
//

#include "Student.h"

#include <utility>
#include <ios>


Student::Student(string setSubject,
                 string setSchool,
                 char setSex,
                 int setAge,
                 char setAddress,
                 string setFamsize,
                 char setPstatus,
                 int setMedu,
                 int setFedu,
                 string setMjob,
                 string setFjob,
                 string setReason,
                 string setGuardian,
                 int setTraveltime,
                 int setStudytime,
                 int setFailures,
                 bool setSchoolsup,
                 bool setFamsup,
                 bool setPaid,
                 bool setActivities,
                 bool setNursery,
                 bool setHigher,
                 bool setInternet,
                 bool setRomantic,
                 int setFamrel,
                 int setFreetime,
                 int setGoout,
                 int setDalc,
                 int setWalc,
                 int setHealth,
                 int setAbsences,
                 int setG1,
                 int setG2,
                 int setG3)
        :
        subject(std::move(setSubject)),
        school(std::move(setSchool)),
        sex(setSex),
        age(setAge),
        address(setAddress),
        famsize(std::move(setFamsize)),
        Pstatus(setPstatus),
        Medu(setMedu),
        Fedu(setFedu),
        Mjob(std::move(setMjob)),
        Fjob(std::move(setFjob)),
        reason(std::move(setReason)),
        guardian(std::move(setGuardian)),
        traveltime(setTraveltime),
        studytime(setStudytime),
        failures(setFailures),
        schoolsup(setSchoolsup),
        famsup(setFamsup),
        paid(setPaid),
        activities(setActivities),
        nursery(setNursery),
        higher(setHigher),
        internet(setInternet),
        romantic(setRomantic),
        famrel(setFamrel),
        freetime(setFreetime),
        goout(setGoout),
        Dalc(setDalc),
        Walc(setWalc),
        health(setHealth),
        absences(setAbsences),
        G1(setG1),
        G2(setG2),
        G3(setG3) {

}

string Student::getSubject() {
    return this->subject;
}

string Student::getSchool() {
    return this->subject;
}

char Student::getSex() {
    return this->sex;
}

int Student::getAge() {
    return this->age;
}

char Student::getAddress() {
    return this->address;
}

string Student::getFamsize() {
    return this->famsize;
}

char Student::getPstatus() {
    return this->Pstatus;
}

int Student::getMedu() {
    return this->Medu;
}

int Student::getFedu() {
    return this->Fedu;
}

string Student::getMjob() {
    return this->Mjob;
}

string Student::getFjob() {
    return this->Fjob;
}

string Student::getReason() {
    return this->reason;
}

string Student::getGuardian() {
    return this->guardian;
}

int Student::getTraveltime() {
    return this->traveltime;
}

int Student::getStudyTime() {
    return this->studytime;
}

int Student::getFailures() {
    return this->failures;
}

bool Student::getSchoolsup() {
    return this->schoolsup;
}

bool Student::getFamsup() {
    return this->famsup;
}

bool Student::getPaid() {
    return this->paid;
}

bool Student::getActivities() {
    return this->activities;
}

bool Student::getNursery() {
    return this->nursery;
}

bool Student::getHigher() {
    return this->higher;
}

bool Student::getInternet() {
    return this->internet;
}

bool Student::getRomantic() {
    return this->romantic;
}

int Student::getFamrel() {
    return this->famrel;
}

int Student::getFreetime() {
    return this->freetime;
}

int Student::getGoout() {
    return this->goout;
}

int Student::getDalc() {
    return this->Dalc;
}

int Student::getWalc() {
    return this->Walc;
}

int Student::getHealth() {
    return this->health;
}

int Student::getAbsences() {
    return this->absences;
}

int Student::getG1() {
    return this->G1;
}

int Student::getG2() {
    return this->G2;
}

int Student::getG3() {
    return this->G3;
}

void Student::setSubject(const string &setSubject) {
    this->subject = setSubject;
}

void Student::setSchool(const string &setSchool) {
    this->school = setSchool;
}

void Student::setSex(char setSex) {
    this->sex = setSex;
}

void Student::setAge(int setAge) {
    this->age = setAge;
}

void Student::setAddress(char setAddress) {
    this->address = setAddress;
}

void Student::setFamsize(const string &setFamsize) {
    this->famsize = setFamsize;
}

void Student::setPstatus(char setPstatus) {
    this->Pstatus = setPstatus;
}

void Student::setMedu(int setMedu) {
    this->Medu = setMedu;
}

void Student::setFedu(int setFedu) {
    this->Fedu = setFedu;
}

void Student::setMjob(const string &setMjob) {
    this->Mjob = setMjob;
}

void Student::setFjob(const string &setFjob) {
    this->Fjob = setFjob;
}

void Student::setReason(const string &setReason) {
    this->reason = setReason;
}

void Student::setGuardian(const string &setGuardian) {
    this->guardian = setGuardian;
}

void Student::setTraveltime(int setTraveltime) {
    this->traveltime = setTraveltime;
}

void Student::setStudytime(int setStudytime) {
    this->studytime = setStudytime;
}

void Student::setFailures(int setFailures) {
    this->failures = setFailures;
}

void Student::setSchoolsup(bool setSchoolsup) {
    this->schoolsup = setSchoolsup;
}

void Student::setFamsup(bool setFamsup) {
    this->famsup = setFamsup;
}

void Student::setPaid(bool setPaid) {
    this->paid = setPaid;
}

void Student::setActivities(bool setActivities) {
    this->activities = setActivities;
}

void Student::setNursery(bool setNursery) {
    this->nursery = setNursery;
}

void Student::setHigher(bool setHigher) {
    this->higher = setHigher;
}

void Student::setInternet(bool setInternet) {
    this->internet = setInternet;
}

void Student::setRomantic(bool setRomantic) {
    this->romantic = setRomantic;
}

void Student::setFamrel(int setFamrel) {
    this->famrel = setFamrel;
}

void Student::setFreetime(int setFreetime) {
    this->freetime = setFreetime;
}

void Student::setGoout(int setGoout) {
    this->goout = setGoout;
}

void Student::setDalc(int setDalc) {
    this->Dalc = setDalc;
}

void Student::setWalc(int setWalc) {
    this->Walc = setWalc;
}

void Student::setHealth(int setHealth) {
    this->health = setHealth;
}

void Student::setAbsences(int setAbsences) {
    this->absences = setAbsences;
}

void Student::setG1(int setG1) {
    this->G1 = setG1;
}

void Student::setG2(int setG2) {
    this->G2 = setG2;
}

void Student::setG3(int setG3) {
    this->G3 = setG3;
}

ostream &Student::operator<<(ostream &out) {
    out << boolalpha;
    out << this->subject << "\t" << this->school << "\t" << this->sex << "\t" << to_string(this->age) << "\t" << this->address << "\t";
    out << this->famsize << "\t" << this->Pstatus << "\t" << to_string(this->Medu) << "\t" << to_string(this->Fedu) << "\t";
    out << this->Mjob << "\t" << this->Fjob << "\t" << this->reason << "\t" << this->guardian << "\t";
    out << to_string(this->traveltime) << "\t" << to_string(this->studytime) << "\t" << to_string(this->failures) << "\t";
    out << this->schoolsup << "\t" << this->famsup << "\t" << this->paid << "\t" << this->activities << "\t";
    out << this->nursery << "\t" << this->higher << "\t" << this->internet << "\t" << this->romantic << "\t";
    out << to_string(this->famrel) << "\t" << to_string(this->freetime) << "\t" << to_string(this->goout) << "\t";
    out << to_string(this->Dalc) << "\t" << to_string(this->Walc) << "\t" << to_string(this->health) << "\t";
    out << to_string(this->absences) << "\t" << to_string(this->G1) << "\t" << to_string(this->G2) << "\t";
    out << to_string(this->G3) << "\n";
    return out;

}

// string subject, string school, char sex, int age, char address, string famsize,char Pstatus, int Medu, int Fedu,
// string Mjob, \n string Fjob, string reason, string guardian, int traveltime, int studytime, int failures,
// bool schoolsup, bool famsup, bool paid, bool activities, bool nursery, bool higher, \n bool internet, bool romantic,
// int famrel, int freetime,int goout, int Dalc, int Walc, int health, int absences, int G1, int G2, int G3