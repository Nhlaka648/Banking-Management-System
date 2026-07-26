#include <iostream>
#include "Bank.h"

using namespace std;

int main()
{
    Bank bank;
    int choice;

    do
    {
        cout << "\n=================================" << endl;
        cout << "     BANKING MANAGEMENT SYSTEM   " << endl;
        cout << "=================================" << endl;
        cout << "1. Create Customer" << endl;
        cout << "2. Dispaly Customers" << endl;
        cout << "3. Search Customer" << endl;
        cout << "4. Create Account" << endl;
        cout << "5. Display Accounts" << endl;
        cout << "6. Search Account" << endl;
        cout << "7. Deposit Money" << endl;
        cout << "8. Withdraw Money" << endl;
        cout << "9. Check Balance" << endl;
        cout << "10. Delete Account" << endl;
        cout << "11. Create Transaction" << endl;
        cout << "12. Display Transactions" << endl;
        cout << "13. Exit" << endl;
        cout << "================================" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
        case 1:
            bank.createCustomer();
            break;

        case 2:
            bank.displayCustomer();
            break;

        case 3:
            bank.searchCustomer();
            break;

        case 4:
            bank.createAccount();
            break;

        case 5:
            bank.displayAccounts();
            break;

        case 6:
            bank.searchAccount();
            break;

        case 7:
            bank.depositMoney();
            break;

        case 8:
            bank.withdrawMoney();
            break;

        case 9:
            bank.checkBalance();
            break;

        case 10:
            bank.deleteAccount();
            break;

        case 11:
            bank.createTransaction();
            break;

        case 12:
            bank.displayTransactions();
            break;

        case 13:
            cout << "\nThank you for using the Bankong Managemnt System!!!" << endl;
            break;

        default:
            cout << "\nInvalid choice. Please try again." << endl;
        }
    }while(choice != 13);

    return 0;
}
