#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <iostream>
#include <string>
using namespace std;

class Transaction
{
    private:
        int transactionID;
        int accountNumber;
        string transactionType;
        double amount;
        string transactionDate;

    public:
        //Costructor
        Transaction();
        virtual ~Transaction();

        //Fuction
        void createTransation();
        void displayTransaction();

        //Getterz
        int getTransactionId();
        int getAccountNumber();
        string getTransactionType();
        double getAmount();
        string getTransactionDate();

        //Setters
        void setTransactionType(string type);
        void setAmount(double newAmount);
        void setTransactionDate(string date);

    protected:


};

#endif // TRANSACTION_H
