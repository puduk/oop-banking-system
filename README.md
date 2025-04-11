# 🏦 Object-Oriented Banking System (C++)

A simple console-based banking system written in **object-oriented C++**.  
Features include deposit & withdrawal systems, loan calculator, balance display, card preview, and a helper page for user support.

---

## ✨ Features

- 🔐 Secure sign-in with age & identity validation  
- 💰 Deposit system with limit & negative value handling  
- 💸 Withdrawal with balance check  
- 📈 Live balance view with real-time updates  
- 🧠 Helper system for troubleshooting common ATM problems  
- 🏠🏎️💳 Loan page with custom offers based on income & experience  
- 🪪 Card preview with formatted display using `iomanip`  
- 🧭 Menu-based navigation with `switch-case`  
- 🛡️ Input validation and user guidance with loops & messages  

---

## 🔧 Technologies & Concepts Used

- ✅ Object-oriented programming with a `user` class  
- ✅ Encapsulation with class constructors  
- ✅ Input validation using `cin.fail()` and conditionals  
- ✅ Modular structure via header/source file separation  
- ✅ Menu and navigation logic using `switch`, `while`, and `do-while`  
- ✅ Output alignment using `iomanip` → `setw`  

---

## 🗒️ Notes

- 📌 This is my **4th C++ project**, created to reinforce class and pointer fundamentals.  
- 🚫 No arrays or vectors were used — only classes, variables, and pure control logic.  
- 📌 I intentionally used only basic features (no file I/O, no string parsing) to focus on memory and function logic.  
- 📌 The most original parts of the project are the **Helper Page** and the **Loan Calculator**, which simulate real ATM experiences.

---
## 📁 File Structure

/Utils
├── balance_shower.cpp / .hpp
├── deposit.cpp / .hpp
├── display_card.cpp / .hpp
├── first_page.cpp / .hpp
├── helper.cpp / .hpp
├── loan.cpp / .hpp
├── sign_in.cpp / .hpp
├── signed_in.cpp / .hpp
├── user.cpp / .hpp
├── withdrawal.cpp / .hpp


## 📺 Sample Output
---
------------ Puduk Bank ------------
1 for sign in the bank account:
2 for quit:

----------- Bank System -----------
What is your name:
> Mert
What is your surname:
> Demirkasaoglu
What is your age:
> 21
Age Checking... 
Age Approved...

----------- Puduk Bank -----------
1 for Deposit
2 for Withdrawal
3 for Current Balance
4 for Help
5 Loan Page
6 Bank Card
7 for Quit

--------- Withdrawal Example ---------
1 for Withdrawal
2 for Previous Page
> 1
How much money you want to withdraw:
> 300
Your 300 Prepared. You can take your money.
Current balance is 800

--------- Withdrawal Invalid ---------
How much money you want to withdraw:
> 2000
You don’t have enough balance: 800
Please try again.

------------ Deposit Example ----------
1 for Deposit
2 for Previous Page
> 1
How much money you want to deposit:
> 500
Please prepare your money...
Please put the money carefully...
Current balance is 1300
Have a nice day!

----------- Helper Page ------------
1 for I Can't Deposit
2 for Contact Information
> 1

----------- Deposit Help -----------
- Card might be inserted wrong.
- Card limit may be reached.
- Deposit limit exceeded for ATM.

Returning to main menu...

----------- Contact Informations -----------
Phone Number:        0212 212 22 22
Mail address:        bank@gmail.com
Fax:                 22 22 22 22

-------- Loan Page --------
1 for House Loan
2 for Car Loan
3 for Personal Loan
4 for Previous Page
> 2

What is your income?
> 60000
Years of experience?
> 4

Our Loan Offer For You: 160000
---






