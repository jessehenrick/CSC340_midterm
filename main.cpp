#include <iostream>
#include "Student.h"
#include <chrono>
#include "StudentContainer.h"

using std::cin;
using std::cout;
using std::endl;

int main() {

    auto start = std::chrono::steady_clock::now();
    StudentContainer container;
    container.readFileCSV("../student_data/student-mat.csv", "math");
    container.readFileCSV("../student_data/student-por.csv", "portuguese");
    auto end = std::chrono::steady_clock::now();

    cout << "Elapsed time in milliseconds: "
         << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()
         << " ms" << endl;
    cout << "Goodbye World" << endl;

    return 0;
}
