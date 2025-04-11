#include <iostream>
using namespace std;
#include "signed_in.hpp"
#include "user.hpp"

void withdrawal(user &u) {


    int withdrawal;
    int withdrawal_choice;
    do {
        cout << "------------------------------------" << endl;
        cout << "--------- Withdrawal Page ----------" << endl;
        cout << "1 for Withdrawal" << endl;
        cout << "2 for Previous Page" << endl;
        cin >> withdrawal_choice;

        switch (withdrawal_choice) {
            case 1:
                cout << "How much money you want to withdraw: " << endl;
                cin >> withdrawal;
            if (withdrawal < 0) {
                cout << "Your withdrawal is negative." << endl;
                cout << "Your withdrawal must be positive." << endl;
                signed_in(u);
                return;
            }else if (withdrawal > u.current_balance) {
                cout << "You dont have enough balance: " << u.current_balance << endl;
                cout << "Please try again: " << endl;
                signed_in(u);
                return;
            }
            else {
                cout << "Your withdrawal preparing please wait " << endl;
                cout << "Your " << withdrawal << " Prepared You can take your money" << endl;
                u.current_balance -= withdrawal;
                cout << "Current balance is " << u.current_balance << endl;
                cout << "Have a nice day" << endl;
                signed_in(u);
                return;

            }
            case 2:
                signed_in(u);
                return;
            default:
                cout << "Invalid number. Please try again. " << endl;
            continue;
        }
    }while (withdrawal_choice == 2);

}