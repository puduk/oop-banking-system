#include <iostream>
using namespace std;
#include "sign_in.hpp"
#include "first_page.hpp"



int first_page(user &u) {
    short first_choice ;
    cout << "-----------------------------------" << endl;
    cout << "------------ Puduk Bank -----------" << endl;
    cout << "------------------------------------" << endl;
    while (true) {
        cout << "1 for sign in the bank account: " << endl;
        cout << "2 for quit: " << endl;
        cin >> first_choice;

        switch (first_choice) {
            case 1:
                cout << "Signing the account : " << endl;
            cout << "This can take a while" << endl;
            cout << endl;
            sign_in(u);
            break;
            case 2:
                cout << "Quiting...  " << endl;
            exit(0);
            default:
                cout << "Invalid Choice" << endl;
            break;
        }
    }
}
