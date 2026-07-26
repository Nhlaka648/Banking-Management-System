#include "Bank.h"

//Contructor
Bank::Bank()
{
    //ctor
    customerCount = 0;
    accountCount = 0;
    transactionCount = 0;
}

//==================
//CUSTOMER FUCTIONS
//==================

void Bank::createCustomer()
{
    if(customerCount < 100)
    {
        customers[customerCount].createCustomer();
        customerCount++;

        cout << "\nCustomer added successfully.\n";
    }
    else
     {
        cout << "\nCustomer list is full.\n";
     }
}

void Bank::displayCustomer()
{
    if(customerCount == 0)
    {
        cout << "\nNo cuistomer found.\n";
        return;
    }

    for(int i = 0; i < customerCount; i++)
    {
        customers[i].displayCustomer();
        cout << endl;
    }
}

void Bank::searchCustomer()
{
    int id;
    bool found = false;

    cout << "Enter Customer ID: ";
    cin >> id;

    for(int i = 0; i < customerCount; i++)
    {
        if(customers[i].getCustomerID() == id)
        {
            customers[i].displayCustomer();
            found = true;
            break;
        }
    }

    if(!found)
        cout << "\nCustomer not found.\n";
}

//======================
// ACCOUNT FUCTIONS
//======================

void Bank::createAccount()
{
    if(accountCount < 100)
    {
        accounts[accountCount].createAccout();
        accountCount++;

        cout << "\nAccount created successfully.\n";
    }
    else
    {
        cout << "\nMaximum number of accounts reached.\n";
    }
}

void Bank::displayAccounts()
{
    if(accountCount == 0)
    {
        cout << "\nNo accounts available.\n";
        return;
    }

    for(int i = 0; i < accountCount; i++)
    {
        accounts[i].displayAccount();
        cout << endl;
    }
}

void Bank::searchAccount()
{
    int number;
    bool found = false;

    cout << "Enter Account Number: ";
    cin >> number;

    for(int i = 0; i < accountCount; i++)
    {
        if(accounts[i].getAccountNumber() == number)
        {
            accounts[i].displayAccount();
            found = true;
            break;
        }
    }

    if(!found)
        cout << "\nAccount not found.\n";
}

void Bank::deleteAccount()
{
    int number;
    bool found = false;

    cout << "Enter Account Number: ";
    cin >> number;

    for(int i = 0; i < accountCount; i++)
    {
        if(accounts[i].getAccountNumber() == number)
        {
            accounts[i].setActive(false);

            cout << "\nAccount has been deactivated.\n";
            found = true;
            break;
        }
    }

    if(!found)
        cout << "\nAccount not found.\n";
}

//==================
//BANKING FUCTIONS
//==================

void Bank::depositMoney()
{
    int number;
    double amount;

    cout << "Enter Account Number: ";
    cin >> number;

    for(int i = 0; i < accountCount; i++)
    {
        if(accounts[i].getAccountNumber() == number)
        {
            cout << "Enter Amount: R";
            cin >> amount;

            accounts[i].deposit(amount);

            return;
        }
    }

    cout << "\nAccount not found.\n";

}

void Bank::withdrawMoney()
{
    int number;
    double amount;

    cout << "Enter Account Number: ";
    cin >> number;

    for(int i = 0; i < accountCount; i++)
    {
        if(accounts[i].getAccountNumber() == number)
        {
            cout << "Enter Amount: R";
            cin >> amount;

            accounts[i].withdraw(amount);

            return;
        }
    }

    cout << "\nAccount not found,\n";
}

void Bank::checkBalance()
{
    int number;

    cout << "Enter Account Number: ";
    cin >> number;

    for(int i = 0; i < accountCount; i++)
    {
        if(accounts[i].getAccountNumber() == number)
        {
            cout << "\nCurrent Balance: R"
                 << accounts[i].getBalance() << endl;

            return;
        }
    }

    cout << "\nAccount not found.\n";
}

//=====================
//TRANSACTION FUCTIONS
//=====================

void Bank::createTransaction()
{
    if(transactionCount < 500)
    {
        transaction[transactionCount].createTransation();
        transactionCount++;

        cout << "\nTransaction added successfully.\n";
    }
    else
    {
        cout << "\nTransaction storage is full.\n";
    }
}

void Bank::displayTransactions()
{
    if(transactionCount == 0)
    {
        cout << "\nNo transactions found.\n";
        return;
    }

    for(int i = 0; i < transactionCount; i++)
    {
        transaction[i].displayTransaction();
        cout << endl;
    }
}

Bank::~Bank()
{
    //dtor
}
