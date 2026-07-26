#include "Customer.h"

//Contructor
Customer::Customer()
{
    //ctor
    customerID = 0;
    firstName = "";
    lastName = "";
    phoneNumber = "";
    address = "";
    active = false;
}

//Create a new customer
void Customer::createCustomer()
{
    cout << "\n===== Create Customer =====" << endl;

    cout << "Enter Customer ID: ";
    cin >> customerID;

    cin.ignore();

    cout << "Enter First Name: ";
    getline(cin, firstName);

    cout << "Enter Last Name: ";
    getline(cin, lastName);

    cout << "Enter Phone Number: ";
    getline(cin, phoneNumber);

    cout << "Enter Address: ";
    getline(cin, address);

    active = true;

    cout << "\nCustomer created successfully!!!" << endl;
}

//Display customer information
void Customer::displayCustomer()
{
    cout << "\n===== Customer Details =====" << endl;
    cout << "Customer ID : " << customerID << endl;
    cout << "First Name  : " << firstName << endl;
    cout << "Last Name   : " << lastName << endl;
    cout << "Phone       : " << phoneNumber << endl;
    cout << "Address     : " << address << endl;

    if(active)
        cout << "Status     : Active" << endl;
    else
        cout << "Satus      : Inactive" << endl;
}

//Getter for Customer ID
int Customer::getCustomerID()
{
    return customerID;
}

//Getter for First Name
string Customer::getFirstName()
{
    return firstName;
}

//Getter for Last Name
string Customer::getLastName()
{
    return lastName;
}

//Getter for Phone Number
string Customer::getPhoneNumber()
{
    return phoneNumber;
}

//Getter for Address
string Customer::getAddress()
{
    return address;
}

//Check if customer is active
bool Customer::isActive()
{
    return active;
}

//Update phone number
void Customer::setPhoneNumber(string phone)
{
    phoneNumber = phone;
}

//Update address
void Customer::setAddress(string newAddress)
{
    address = newAddress;
}

void Customer::setActive(bool status)
{
    active = status;
}

Customer::~Customer()
{
    //dtor
}
