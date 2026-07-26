#include "Account.h"

//Contructor
Account::Account()
{
    //ctor
    accountNumber = 0;
    accountHolder = "";
    balance = 0.0;
    pin = 0000;
    active = false;
}

//Create a new account
void Account::createAccout()
{
    cout << "\n===== Create Account ======" << endl;

    cout << "Enter Account Number: ";
    cin >> accountNumber;

    cin.ignore();

    cout << "Enter Account Holder Name: ";
    getline(cin, accountHolder);

    cout << "Enter PIN: ";
    cin >> pin;

    balance = 0.0;
    active = true;

    cout << "\nAccount created successfully!!!" << endl;
}

//Display account details
void Account::displayAccount()
{
    cout << "\n===== Account Details =====" << endl;
    cout << "Account Number : " << accountNumber << endl;
    cout << "Account Holder : " << accountHolder << endl;
    cout <<  "Balance      : R" << balance << endl;

    if(active)
        cout << "Status           : Active " << endl;
    else
        cout << "Status           : Inactive " << endl;
}

//Diposit money
void Account::deposit(double amount)
{
    if(active)
    {
        balance += amount;
        cout << "Deposit successful!!!" << endl;
    }
    else
    {
        cout << "Account is inactive." << endl;
    }
}

//Withdraw money
void Account::withdraw(double amount)
{
    if(!active)
    {
        cout << "Account is inactive. " << endl;
        return;
    }

    if(amount > balance)
    {
        cout << "Insufficient balance!!! " << endl;
    }
    else
    {
        balance -= amount;
        cout << "Withdrawal successful!!!" << endl;
    }
}

//Getter for account number
int Account::getAccountNumber()
{
    return accountNumber;
}

//Getter for balance
double Account::getBalance()
{
    return balance;
}

//Getter for pin
int Account::getPin()
{
    return pin;
}

//Check if account is active
bool Account::isActive()
{
    return active;
}

//Change Pin
void Account::setPin(int newPin)
{
    pin = newPin;
}

//Change account status
void Account::setActive(bool status)
{
    active = status;
}

//Account::~Account()

    //dtor

