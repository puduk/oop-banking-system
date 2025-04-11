#include <iostream>
using namespace std;
#include "deposit.hpp"
#include "withdrawal.hpp"
#include "balance_shower.hpp"
#include "helper.hpp"
#include "loan.hpp"
#include "display_card.hpp"
#include "signed_in.hpp"


void signed_in(user &u) {

    int interface_choice;

    cout << "--------------- Signing ---------------" << endl;
    cout << "---------------------------------------" << endl;
    cout << "---------------- Puduk ----------------" << endl;
    cout << "---------------- Bank -----------------" << endl;
    cout << "---------------------------------------" << endl;
    cout << "1 for Deposit: " << endl;
    cout << "2 for Withdrawal: " << endl;
    cout << "3 for Current Balance: " << endl;
    cout << "4 for Help: " << endl;
    cout << "5 Loan Page: " << endl;
    cout << "6 Bank Card: " << endl;
    cout << "7 for Quit: " << endl;


    while (true) {
        cin >> interface_choice;
        switch (interface_choice) {
            case 1:
                deposit(u);
            break;
            case 2:
                withdrawal(u);
            break;
            case 3:
                balance_shower(u);
            break;
            case 4:
                helper(u);
            break;
            case 5:
                loan(u);
            break;
            case 6:
                display_card(u);
            break;
            case 7:
                cout << "Have a nice day!" << endl;
            exit(0);
            default:
                cout << "Invalid choice." << endl;

        }
    }
}