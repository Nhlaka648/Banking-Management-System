#include "Transaction.h"

//Contructor
Transaction::Transaction()
{
    //ctor
    transactionID = 0;
    accountNumber = 0;
    transactionType = "";
    amount = 0.0;
    transactionDate = "";
}

//Create a new transaction
void Transaction::createTransation()
{
    cout << "\n===== Create Transaction =====" << endl;

    cout << "Enter Transaction ID: ";
    cin >> transactionID;

    cout << "Enter Account Number: ";
    cin >> accountNumber;

    cin.ignore();

    cout << "Enter Transaction Type (Deposit/Withdraw): ";
    getline(cin, transactionType);

    cout << "Enter Amount: R";
    cin >> amount;

    cin.ignore();

    cout << "Enter Transaction Date (DD/MM/YYYY): ";
    getline(cin, transactionDate);

    cout << "\nTransaction recorded successfully!!!" << endl;
}

//Display transaction details
void Transaction::displayTransaction()
{
    cout << "\n===== Transaction Details =====" << endl;
    cout << "Transaction ID : " << transactionID << endl;
    cout << "Account Number : " << accountNumber << endl;
    cout << "Type           : " << transactionType << endl;
    cout << "Amount         : R" << amount << endl;
    cout << "Date           : " << transactionDate << endl;
}

//Getter for Transaction ID
int Transaction::getTransactionId()
{
    return transactionID;
}

//Getter for Account Number
int Transaction::getAccountNumber()
{
    return accountNumber;
}

//Getter for Transaction Type
string Transaction::getTransactionType()
{
    return transactionType;
}

//Getter for Amount
double Transaction::getAmount()
{
    return amount;
}

//Getter for Transaction Date
string Transaction::getTransactionDate()
{
    return transactionDate;
}

//Update Transaction Type
void Transaction::setTransactionType(string type)
{
    transactionType = type;
}

//Update Amount
void Transaction::setAmount(double newAmount)
{
    amount = newAmount;
}

//Update Transaction Date
void Transaction::setTransactionDate(string date)
{
    transactionDate = date;
}

Transaction::~Transaction()
{
    //dtor
}
