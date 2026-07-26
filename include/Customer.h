#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <string>
using namespace std;

class Customer
{
    private:
        int customerID;
        string firstName;
        string lastName;
        string phoneNumber;
        string address;
        bool active;

    public:
        //Constructor
        Customer();
        virtual ~Customer();

        //Functions
        void createCustomer();
        void displayCustomer();

        //Getters
        int getCustomerID();
        string getFirstName();
        string getLastName();
        string getAddress();
        string getPhoneNumber();
        bool isActive();

        //Setters
        void setPhoneNumber(string phone);
        void setAddress(string newAddress);
        void setActive(bool status);

    protected:


};

#endif // CUSTOMER_H
