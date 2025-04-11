#ifndef USER_H
#define USER_H
#include <iostream>

using namespace std;

class user{
  public:
    string name;
    string surname;
    short age;
    long long user_id;
    long long card_number;
    short card_ccv;
    string card_date;
    int current_balance;

    user();

  };
#endif