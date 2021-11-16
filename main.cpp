#include <iostream>
#include "StudentContainer.h"

using std::cin;
using std::cout;
using std::endl;

void printMenuOptions();

int main() {

    string filePathMat = "../student_data/student-mat.csv";
    string filePathPor = "../student_data/student-por.csv";
    cout << "File path(s) loaded as:\n\"" << filePathMat << "\" (math)" << endl << "and" << endl;
    cout << "\"" << filePathPor << "\"" << " (portuguese)" << endl;
    cout << "Is this correct? Y/N" << endl;
    char userInput;
    cin >> userInput;
    cin.ignore();
    if (std::tolower(userInput) != 'y') {
        cout << "Too bad, that was a trick question." << endl;
    }
    cout << "Press enter to load student data from file(s)" << endl;
    getchar();
    StudentContainer container;
    auto start = std::chrono::steady_clock::now();
    container.readFileCSV(filePathMat, "math");
    container.readFileCSV(filePathPor, "portuguese");
    auto end = std::chrono::steady_clock::now();
    cout << "All files imported. Time elapsed: ";
    cout << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count() << " miliseconds" << endl;

    printMenuOptions();

    return 0;
}

void printMenuOptions() {
    cout << "--- MENU ---\n"
            "\t1: Print information for each age value\n"
            "\t2: Print information based on variable Pstatus\n";

}

/*
 * auto start = std::chrono::steady_clock::now();
 * * * * * * * * * * * * * * * * * * * * * * * * *
 * auto end = std::chrono::steady_clock::now();
 * cout << "Elapsed time in milliseconds: "
 *       << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()
 *       << " ms" << endl;
 *
 */