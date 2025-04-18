#include "addressBookType.h"
#include <iostream>
using namespace std;

int main() {
    addressBookType addressBook;

    string filename;
    cout << "Enter file name: ";
    cin >> filename;

    addressBook.loadFromFile(filename);

    int choice;
    do {
        cout << "\nWelcome to the address book program." << endl;
        cout << "Choose among the following options:" << endl;
        cout << "1: To see if a person is in the address book" << endl;
        cout << "2: Print the information of a person" << endl;
        cout << "3: Print the names of person having birthday in a particular month" << endl;
        cout << "4: Print the names of persons between two last names" << endl;
        cout << "5: Print the names of persons having a particular status" << endl;
        cout << "6: Print the address book" << endl;
        cout << "7: Save data" << endl;
        cout << "9: Terminate the program" << endl;
        cin >> choice;

        switch (choice) {
        case 1: {
            string lastName;
            cout << "Enter the last name of the person: ";
            cin >> lastName;
            addressBook.searchByLastName(lastName);
            break;
        }
        case 2: {
            string lastName;
            cout << "Enter the last name of the person: ";
            cin >> lastName;
            addressBook.searchByLastName(lastName);
            break;
        }
        case 3: {
            int month;
            cout << "Enter the month (1-12): ";
            cin >> month;
            addressBook.printByBirthMonth(month);
            break;
        }
        case 4: {
            string start, end;
            cout << "Enter the starting last name: ";
            cin >> start;
            cout << "Enter the ending last name: ";
            cin >> end;
            addressBook.printByLastNameRange(start, end);
            break;
        }
        case 5: {
            string type;
            cout << "Enter the type (Family, Friend, Business): ";
            cin >> type;
            addressBook.printByType(type);
            break;
        }
        case 6:
            addressBook.printAll();
            break;
        case 7: {
            string outFilename;
            cout << "Enter the file name to save data: ";
            cin >> outFilename;
            addressBook.saveToFile(outFilename);
            break;
        }
        case 9:
            cout << "Terminating program..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 9);

    return 0;
}
