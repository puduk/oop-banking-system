#include <iostream>
using namespace std;
#include "signed_in.hpp"
#include "user.hpp"

void loan(user &u) {
    double income ;
    int loaner_choice;
    double years_of_experience ;
    double loan_amount ;

    cout << "---------------------------" << endl;
    cout << "-------- Loan Page --------" << endl;
    cout << "1 for House Loan." << endl;
    cout << "2 for Car Loan." << endl;
    cout << "3 for Personal Loan." << endl;
    cout << "4 for Previous Page." << endl;
    cin >> loaner_choice;

    if (loaner_choice == 4) {
        signed_in(u);
        return;
    }
    while (true) {

        cout << "What is your income: " << endl;
        cin >> income;
        cout << "How many years of experience you have: " << endl;
        cin >> years_of_experience;

        switch (loaner_choice) {
            case 1:
                if (income < 40'000 || years_of_experience < 2) {
                    loan_amount = (income * years_of_experience) /2;
                    cout << "Our Loan Offer For You: " << loan_amount << endl;
                }else if (income < 80'000 || years_of_experience < 5) {
                    loan_amount = (income * years_of_experience) /1.5;
                    cout << "Our Loan Offer For You: " << loan_amount << endl;
                }else {
                    loan_amount = (income * years_of_experience) /1.2;
                    cout << "Our Loan Offer For You: " << loan_amount << endl;
                }
                signed_in(u);
                return;
            case 2:
                if (income < 40'000 || years_of_experience < 2) {
                    loan_amount = (income * years_of_experience) /3;
                    cout << "Our Loan Offer For You: " << loan_amount << endl;
                }else if (income < 80'000 || years_of_experience < 5) {
                    loan_amount = (income * years_of_experience) /2;
                    cout << "Our Loan Offer For You: " << loan_amount << endl;
                }else {
                    loan_amount = (income * years_of_experience) /1.5;
                    cout << "Our Loan Offer For You: " << loan_amount << endl;
                }
                signed_in(u);
                return;
            case 3:
                if (income < 40'000 || years_of_experience < 2) {
                    loan_amount = (income * years_of_experience) /4;
                    cout << "Our Loan Offer For You: " << loan_amount << endl;
                }else if (income < 80'000 || years_of_experience < 5) {
                    loan_amount = (income * years_of_experience) /3;
                    cout << "Our Loan Offer For You: " << loan_amount << endl;
                }else {
                    loan_amount = (income * years_of_experience) /2;
                    cout << "Our Loan Offer For You: " << loan_amount << endl;
                }
                signed_in(u);
                return;
            default:
                cout << "Invalid Choice. Please try again." << endl;
                continue;
        }
    }
}
