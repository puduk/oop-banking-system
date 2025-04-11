#include <iostream>
using namespace std;
#include "signed_in.hpp"
#include "user.hpp"


void deposit (user &u) {


    int deposit;
    int deposit_choice;

    while (true) {
        cout << "------------------------------------" << endl;
        cout << "---------- Deposit Page ------------" << endl;
        cout << "1 for Deposit" << endl;
        cout << "2 for Previous Page" << endl;
        cin >> deposit_choice;

        switch (deposit_choice) {
            case 1:
                cout << "How much money you want to deposit: " << endl;
            cin >> deposit;
            if (deposit < 0) {
                cout << "Your deposit is negative." << endl;
                cout << "Your deposit must be positive." << endl;
                continue;
            }else if (deposit > 100'000) {
                cout << "Currently you can not deposit. " << "$" <<deposit << endl;
                cout <<"Please try again. " << endl;
                continue;
            }else {
                cout << "Please prepare your money: " << endl;
                cout << "Please put the money carefully... " << endl;
                u.current_balance += deposit;
                cout << "Current balance is " << u.current_balance << endl;
                cout << "Have a nice day" << endl;
                signed_in(u);
                return;
                ;
            }
            case 2:
                signed_in(u);
                return;
            default:
                cout << "Invalid number. Please try again. " << endl;
            continue;
        }

    }
}