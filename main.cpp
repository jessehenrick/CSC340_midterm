#include <iostream>
#include "Student.h"
#include "StudentContainer.h"

using std::cin;
using std::cout;
using std::endl;

int main() {
    Student someStudent("something");
    someStudent << cout;

    return 0;
}
