
using namespace std;

#ifndef CSC340_MIDTERM_LISTCLASS_H
#define CSC340_MIDTERM_LISTCLASS_H


class ListClass {
public:
    ListClass();
    vector <string> get_schoolVec();
    vector <string> get_sexVec();
    vector <double> get_ageVec();
    vector <string> get_addressVec();
    vector <std::string> get_famSizeVec();
    void addtoSchoolVec(string data);
    void addtoSexVec(string data);
    void addtoAddressVec(string data);
    //void addtoFamSizeVec(std::string data);
    void addtoAgeVec(int data);
    void printData();
    int getsizeofage();

private:
    vector <std::string> schoolVec;
    vector <std::string> sexVec;
    vector <double> ageVec;
    vector <std::string> addressVec;
    //std::vector <std::string> famSizeVec;

};


#endif //CSC340_MIDTERM_LISTCLASS_H
