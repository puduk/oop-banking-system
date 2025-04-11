#include <iostream>
using namespace std;
#include "signed_in.hpp"
#include "user.hpp"



void balance_shower(user &u) {

    int balance_choice;

    while (true) {
        cout << "-----------------------------------------" << endl;
        cout << "---------- Balance Shower Page ----------" << endl;
        cout << "1 for Current Balance" << endl;
        cout << "2 for Previous Page" << endl;
        cin >> balance_choice;

        switch (balance_choice) {
            case 1:
                cout << "Current Balance: " << u.current_balance << endl;
            break;
            case 2:
                signed_in(u);
            return;
            default:
                cout << "Invalid number. Please try again. " << endl;
            break;
        }
    }
}
