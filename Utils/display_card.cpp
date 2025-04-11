#include <iostream>
#include "signed_in.hpp"
#include <iomanip>
#include "user.hpp"
using namespace std;

void display_card(user &u ) {
    int  card_choice;

    while (true) {
        cout << "1 for Show Card: " << endl;
        cout << "2 for Previous Page: " << endl;
        cin >> card_choice;
        switch (card_choice) {
            case 1:
                cout << "------------------------------" << endl;
            cout << "--------- Bank Card ----------" << endl;
            cout << "-----------------------------" << endl;
            cout << setw(15) << "Holder Name: " << u.name << endl;
            cout << setw(15) << "Holder Surname: " << u.surname << endl;
            cout << setw(15) << "Card Number: " << u.card_number << endl;
            cout << setw(15) << "Expiry date: " << u.card_date << endl;
            cout << setw(15) << "Security Code: " << u.card_ccv << endl;
            cout << "------------------------------" << endl;
            cout << "------------------------------" << endl;
            cout << endl << endl;
            signed_in(u);
            return;
            case 2:
                signed_in(u);
            return;
            default:
                cout << "Invalid Choice" << endl;
                continue;
        }
    }
}