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
    cout << "Is this correct? Y/N" << endl << ">";
    char userInput;
    cin >> userInput;
    cin.ignore();
    if (std::toupper(userInput) != 'Y') {
        cout << "Too bad, that was a trick question." << endl;
    }
    cout << "Press enter to load student data from file(s)" << endl << ">_";
    getchar();
    StudentContainer container;
    auto start = std::chrono::steady_clock::now();
    container.readFileCSV(filePathMat, "math");
    container.readFileCSV(filePathPor, "portuguese");
    auto end = std::chrono::steady_clock::now();
    cout << "All files imported. Time elapsed: ";
    cout << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count() << " milliseconds" << endl;



    int userChoice = -1;
    char userChar;
    string userString;
    StudentContainer tempContainer;
    while (userChoice != 6) {
        printMenuOptions();
        while (!(cin >> userChoice)) {
            cin.clear();
            cin.ignore();
            cout << "Invalid input." << endl << ">_";
        }
        cin.ignore();
        switch (userChoice) {
            case 1:
                cout << "There are " << container.getStudentsSize() << " students in this data set." << endl;
                container.printDalcStats();
                container.printWalcStats();
                break;
            case 2:
                cout << "Printing information for all age groups in data set" << endl;
                container.printAgeMakeupWithStats();
                break;
            case 3:
                cout << "Search for students with set Pstatus. . ." << endl;
                cout << "enter 'T' for living together, or 'A' for living apart" << endl << ">";
                cin >> userChar;
                cin.ignore();
                userChar = (char) toupper(userChar);
                while (!(userChar == 'T' || userChar == 'A')) {
                    cout << "Invalid input." << endl << ">";
                    cin >> userChar;
                    userChar = (char) toupper(userChar);
                    cin.ignore();
                }
                tempContainer = container.filterPstatus(userChar);
                cout << "Number of students with variable Pstatus = '" << userChar << "' : ";
                cout << tempContainer.getStudentsSize() << endl;
                tempContainer.printDalcStats();
                tempContainer.printWalcStats();
                break;
            case 4:
                cout << "Search for students with set internet. . ." << endl;
                cout << R"(Enter 'Y' for internet access, 'N' for no internet access)" << endl << ">";
                cin >> userChar;
                cin.ignore();
                userChar = (char) toupper(userChar);
                while (!(userChar == 'Y' || userChar == 'N')) {
                    cout << "Invalid input." << endl << ">";
                    cin >> userChar;
                    userChar = (char) toupper(userChar);
                    cin.ignore();
                }
                tempContainer = container.filterInternet(userChar == 'Y');
                userChar == 'Y' ? userString = "yes" : userString = "no";
                cout << "Number of students with variable internet = \"" << userString << "\" : ";
                cout << tempContainer.getStudentsSize() << endl;
                tempContainer.printDalcStats();
                tempContainer.printWalcStats();
                break;
            case 5:
                cout << "Search for students with set sex. . ." << endl;
                cout << R"(Enter 'M' for male, 'F' for female)" << endl << ">";
                cin >> userChar;
                cin.ignore();
                userChar = (char) toupper(userChar);
                while (!(userChar == 'M' || userChar == 'F')) {
                    cout << "Invalid input." << endl << ">";
                    cin >> userChar;
                    userChar = (char) toupper(userChar);
                    cin.ignore();
                }
                tempContainer = container.filterSex(userChar);
                cout << "Number of students with variable sex = '" << userChar << "' : ";
                cout << tempContainer.getStudentsSize() << endl;
                tempContainer.printDalcStats();
                tempContainer.printWalcStats();
                break;
            case 6:
                cout << "Cheers!" << endl;
                break;
            default:
                cout << "Invalid choice. Please choose from the menu." << endl;

        }
    }

    return 0;
}

void printMenuOptions() {
    cout << endl << endl << "--- MENU ---\n"
                            "\t1: Print information for entire data set\n"
                            "\t2: Print information for each age value in entire data set\n"
                            "\t3: Print information based on variable Pstatus\n"
                            "\t4: Print information based on variable internet\n"
                            "\t5: Print information based on variable sex\n"
                            "\t6: exit" << endl << ">";
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