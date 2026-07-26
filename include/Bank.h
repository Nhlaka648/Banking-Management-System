#ifndef BANK_H
#define BANK_H

#include <iostream>
#include <string>

#include "Customer.h"
#include "Account.h"
#include "Transaction.h"

using namespace std;

class Bank
{
    private:
        Customer customers[100];
        Account accounts[100];
        Transaction transaction[500];

        int customerCount;
        int accountCount;
        int transactionCount;

    public:
        //Contructor
        Bank();
        virtual ~Bank();

        //Customer Fuctions
        void createCustomer();
        void displayCustomer();
        void searchCustomer();

        //Account Fuctions
        void createAccount();
        void displayAccounts();
        void searchAccount();
        void deleteAccount();

        //Banking Fuctions
        void depositMoney();
        void withdrawMoney();
        void checkBalance();

        //Transaction Fuction
        void createTransaction();
        void displayTransactions();

    protected:

    private:
};

#endif // BANK_H
