#include <iostream>
using namespace std;
#include "signed_in.hpp"
#include <iomanip>
#include "helper.hpp"

void helper(user &u) {

    int helper_choice;

    while (true) {
        cout << "------------------------------------" << endl;
        cout << "----------- Helper Page ------------" << endl;
        cout << "1 for I Cant Deposit: " << endl;
        cout << "2 for I Cant Withdrawal: " << endl;
        cout << "3 for I Cant See My Balance: " << endl;
        cout << "4 for Contact Informations: " << endl;
        cin >> helper_choice;

        switch (helper_choice) {
            case 1:
                cout << "------------------------------------" << endl;
                cout << "----------- Deposit Help -----------" << endl;
                cout << "Option 1: You might put your card wrong . Please put the card where the chipset" << endl;
                cout << "Option 2: Your card might be limited . Please contact with us! " << endl;
                cout << "Option 3: You might try to deposit more then ATM limit . Please try another ATM" << endl;
                signed_in(u);
                return;
            case 2:
                cout << "------------------------------------" << endl;
                cout << "---------- Withdrawal Help ---------" << endl;
                cout << "Option 1: You might put your card wrong . Please put the card where the chipset" << endl;
                cout << "Option 2: Your card might be limited . Please contact with us! " << endl;
                cout << "Option 3: You might try to withdrawal more then your current balance . Please check your current balance!" << endl;
                signed_in(u);
                return;
            case 3:
                cout << "------------------------------------" << endl;
                cout << "--------- See Balance Help ---------" << endl;
                cout << "Option 1: ATM might be broken . Please try another ATM." << endl;
                cout << "Option 2: Your account might be blocked . Please contact with us! " << endl;
                signed_in(u);
                return;
            case 4:
                cout << "---------- Contact Informations ---------" << endl;
                cout << setw(20) << "Phone Number: " << "0212 212 22 22" << endl;
                cout << setw(20) << "Mail adress: " << "bank@gmail.com" << endl;
                cout << setw(20) << "Fax: " << "22 22 22 22" << endl;
                signed_in(u);
                return;
             }
    }
}
