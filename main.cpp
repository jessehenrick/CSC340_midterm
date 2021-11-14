#include <iostream>
#include "Student.h"
#include "StudentContainer.h"

using std::cin;
using std::cout;
using std::endl;

int main() {
    Student someStudent("something");
    bool testTrue = StudentContainer::verifyCSVHeader("schch,sex,age,address,famsize,Pstatus,Medu,Fedu,Mjob,Fjob,reason,guardian,traveltime,studytime,failures,schoolsup,famsup,paid,activities,nursery,higher,internet,romantic,famrel,freetime,goout,Dalc,Walc,health,absences,G1,G2,G3");
    cout << std::boolalpha << testTrue << endl;

    return 0;
}
