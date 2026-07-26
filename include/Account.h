#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>

using namespace std;

class Account
{
    private:
        int accountNumber;
        string accountHolder;
        double balance;
        int pin;
        bool active;

    public:
        //Constructor
        Account();
       //
       // virtual ~Account();

        //Functions
        void createAccout();
        void displayAccount();
        void deposit(double amount);
        void withdraw(double amount);

        //Getters
        int getAccountNumber();
        double getBalance();
        int getPin();
        bool isActive();

        //Setters
        void setPin(int newPin);
        void setActive(bool status);



    protected:


};

#endif // ACCOUNT_H
