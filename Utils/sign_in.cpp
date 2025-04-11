#include <iostream>
using namespace std;
#include "signed_in.hpp"
#include "user.hpp"

    void sign_in (user &u) {

        cout << "----------- Bank System -----------" << endl;
        cout << "------------------------------------" << endl;
        cout << "What is your name: " << endl;
        cin >> u.name;
        cout << "What is your surname: " << endl;
        cin >> u.surname;
        cout << "What is your id: " << endl;
        cin >> u.user_id;
        while (true) {
            cout << "What is your age: " << endl;
            cin >> u.age;
            if (u.age < 18) {
                cout << "Your age is not enough for bank." << endl;
                exit(0);
            }
            else if (u.age >= 100) {
                cout << "It is not safe to open account alone at this age" << endl;
                cout << "Please contact with our help service" << endl;
                exit(0);
            }else
                cout << "Age Checking... " << endl << "Age Approved... " << endl;
            break;
        }
        cout << "What is your card number: " << endl;
        cin >> u.card_number;
        cout << "What is your card ccv: " << endl;
        cin >> u.card_ccv;
        cout << "What is your card date: " << endl;
        cin >> u.card_date;

        signed_in(u);
    }



