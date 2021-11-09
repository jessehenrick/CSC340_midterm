//
// Created by jesse on 11/5/2021.
//

#ifndef CSC340_MIDTERM_LISTCLASS_H
#define CSC340_MIDTERM_LISTCLASS_H


class ListClass {
public:
    ListClass();
    std::vector <std::string> get_schoolVec();
    std::vector <std::string> get_sexVec();
    std::vector <int> get_ageVec();
    std::vector <std::string> get_addressVec();
    std::vector <std::string> get_famSizeVec();
    void addtoSchoolVec(std::string data);
    void addtoSexVec(std::string data);
    void addtoAddressVec(std::string data);
    void addtoFamSizeVec(std::string data);
    void addtoAgeVec(int data);
    void printData();

private:
    std::vector <std::string> schoolVec;
    std::vector <std::string> sexVec;
    std::vector <int> ageVec;
    std::vector <std::string> addressVec;
    std::vector <std::string> famSizeVec;
};


#endif //CSC340_MIDTERM_LISTCLASS_H
