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

void StudentContainer::addStudent(Student studentToAdd) {
    this->students.push_back(studentToAdd);
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

void StudentContainer::printAgeMakeupWithStats() {
    StudentContainer studentsWhoAre15;
    StudentContainer studentsWhoAre16;
    StudentContainer studentsWhoAre17;
    StudentContainer studentsWhoAre18;
    StudentContainer studentsWhoAre19;
    StudentContainer studentsWhoAre20;
    StudentContainer studentsWhoAre21;
    StudentContainer studentsWhoAre22;
    for (auto s : this->students) {
        switch (s.getAge()) {
            case 15:
                studentsWhoAre15.addStudent(s);
                break;
            case 16:
                studentsWhoAre16.addStudent(s);
                break;
            case 17:
                studentsWhoAre17.addStudent(s);
                break;
            case 18:
                studentsWhoAre18.addStudent(s);
                break;
            case 19:
                studentsWhoAre19.addStudent(s);
                break;
            case 20:
                studentsWhoAre20.addStudent(s);
                break;
            case 21:
                studentsWhoAre21.addStudent(s);
                break;
            case 22:
                studentsWhoAre22.addStudent(s);
                break;
        }
    }
    cout << "--" << endl;
    cout << "Number of students who are 15: " << studentsWhoAre15.getStudentsSize() << endl;
    studentsWhoAre15.printDalcStats();
    studentsWhoAre15.printWalcStats();

    cout << "--" << endl;
    cout << "Number of students who are 16: " << studentsWhoAre16.getStudentsSize() << endl;
    studentsWhoAre16.printDalcStats();
    studentsWhoAre16.printWalcStats();

    cout << "--" << endl;
    cout << "Number of students who are 17: " << studentsWhoAre17.getStudentsSize() << endl;
    studentsWhoAre17.printDalcStats();
    studentsWhoAre17.printWalcStats();

    cout << "--" << endl;
    cout << "Number of students who are 18: " << studentsWhoAre18.getStudentsSize() << endl;
    studentsWhoAre18.printDalcStats();
    studentsWhoAre18.printWalcStats();

    cout << "--" << endl;
    cout << "Number of students who are 19: " << studentsWhoAre19.getStudentsSize() << endl;
    studentsWhoAre19.printDalcStats();
    studentsWhoAre19.printWalcStats();

    cout << "--" << endl;
    cout << "Number of students who are 20: " << studentsWhoAre20.getStudentsSize() << endl;
    studentsWhoAre20.printDalcStats();
    studentsWhoAre20.printWalcStats();

    cout << "--" << endl;
    cout << "Number of students who are 21: " << studentsWhoAre21.getStudentsSize() << endl;
    studentsWhoAre21.printDalcStats();
    studentsWhoAre21.printWalcStats();

    cout << "--" << endl;
    cout << "Number of students who are 22: " << studentsWhoAre22.getStudentsSize() << endl;
    studentsWhoAre22.printDalcStats();
    studentsWhoAre22.printWalcStats();
}

double StudentContainer::getAverageDalc() {
    double count = 0;
    double result = 0.0;
    for (auto s : this->students) {
        result += s.getDalc();
        count++;
    }
    return result / count;
}

double StudentContainer::getAverageWalc() {
    double count = 0;
    double result = 0.0;
    for (auto s : this->students) {
        result += s.getWalc();
        count++;
    }
    return result / count;
}

StudentContainer StudentContainer::filterPstatus(char Pstatus) {
    StudentContainer subContainer;
    for (auto s : this->students) {
        if (s.getPstatus() == Pstatus) {
            subContainer.addStudent(s);
        }
    }
    return subContainer;
}

void StudentContainer::printDalcStats() {
    if (this->students.empty()) {
        cout << "empty data set" << endl;
        return;
    }

    double mean = 0.0;
    double standardDeviation = 0.0;
    double median = 0.0;
    int mode = 0;

    vector<int> DalcVec;
    int n = 0;

    for (auto s : this->students) {
        int temp = s.getDalc();
        DalcVec.push_back(temp);
        mean += temp;
        n++;
    }
    mean = mean / n;

    for (auto i : DalcVec) {
        standardDeviation += pow(i - mean, 2);
    }
    standardDeviation = sqrt(standardDeviation / n);

    std::sort (DalcVec.begin(), DalcVec.end());

    if (n % 2 != 0) {
        median = DalcVec.at(n / 2);
    }
    else {
        median = (DalcVec.at((n - 1) / 2) + DalcVec.at(n / 2)) / 2.0;
    }

    int modeArray[5] = {0, 0, 0, 0, 0};
    for (auto i : DalcVec) {
        switch (i) {
            case 1:
                modeArray[0] = modeArray[0] + 1;
                break;
            case 2:
                modeArray[1] = modeArray[1] + 1;
                break;
            case 3:
                modeArray[2] = modeArray[2] + 1;
                break;
            case 4:
                modeArray[3] = modeArray[3] + 1;
                break;
            case 5:
                modeArray[4] = modeArray[4] + 1;
        }
    }
    for (int i = 0; i < 5; i++) {
        if (modeArray[i] >= modeArray[mode]) {
            mode = i;
        }
    }
    mode++;
    cout << std::setprecision(2);
    cout << "Weekday Alcohol statistics:\n\t";
    cout << "Variable Dalc: mean = " << mean << " (" << Student::toStringAlc(int(round(mean))) << ") , standard deviation = ";
    cout << standardDeviation << ", median = " << median << ", mode = " << mode << endl;

}

void StudentContainer::printWalcStats() {
    if (this->students.empty()) {
        cout << "empty data set" << endl;
        return;
    }

    double mean = 0.0;
    double standardDeviation = 0.0;
    double median = 0.0;
    int mode = 0;

    vector<int> WalcVec;
    int n = 0;

    for (auto s : this->students) {
        int temp = s.getWalc();
        WalcVec.push_back(temp);
        mean += temp;
        n++;
    }
    mean = mean / n;

    for (auto i : WalcVec) {
        standardDeviation += pow(i - mean, 2);
    }
    standardDeviation = sqrt(standardDeviation / n);

    for (int outer = 0; outer < n - 1; outer++) {
        int maxIndex = outer;
        for (int inner = outer + 1; inner < n; inner++) {
            if (WalcVec.at(inner) > WalcVec.at(outer)) {
                maxIndex = inner;
            }
        }
        if (maxIndex != outer) {
            int temp = WalcVec.at(outer);
            WalcVec.at(outer) = WalcVec.at(maxIndex);
            WalcVec.at(maxIndex) = temp;
        }
    }
    if (n % 2 != 0) {
        median = WalcVec.at(n / 2);
    }
    else {
        median = (WalcVec.at((n - 1) / 2) + WalcVec.at(n / 2)) / 2.0;
    }

    int modeArray[5] = {0, 0, 0, 0, 0};
    for (auto i : WalcVec) {
        switch (i) {
            case 1:
                modeArray[0] += 1;
                break;
            case 2:
                modeArray[1] += 1;
                break;
            case 3:
                modeArray[2] += 1;
                break;
            case 4:
                modeArray[3] += 1;
                break;
            case 5:
                modeArray[4] += 1;
        }
    }
    for (int i = 0; i < 5; i++) {
        if (modeArray[i] >= modeArray[mode]) {
            mode = i;
        }
    }
    mode++;
    cout << std::setprecision(2);
    cout << "Weekend Alcohol statistics:\n\t";
    cout << "Variable Walc: mean = " << mean << " (" << Student::toStringAlc(int(round(mean))) << ") , standard deviation = ";
    cout << standardDeviation << ", median = " << median << ", mode = " << mode << endl;

}

StudentContainer StudentContainer::filterInternet(bool hasInternet) {
    StudentContainer subSet;
    for (auto s : this->students) {
        if (s.getInternet() == hasInternet) {
            subSet.addStudent(s);
        }
    }
    return subSet;
}

StudentContainer StudentContainer::filterSex(char maleOrFemale) {
    StudentContainer subSet;
    for (auto s : this->students) {
        if (s.getSex() == maleOrFemale) {
            subSet.addStudent(s);
        }
    }
    return subSet;
}




// string subject, string school, char sex, int age, char address, string famsize,char Pstatus, int Medu, int Fedu,
// string Mjob, string Fjob, string reason, string guardian, int traveltime, int studytime, int failures,
// bool schoolsup, bool famsup, bool paid, bool activities, bool nursery, bool higher, bool internet, bool romantic,
// int famrel, int freetime,int goout, int Dalc, int Walc, int health, int absences, int G1, int G2, int G3

