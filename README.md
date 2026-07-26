# Banking Management System

A console-based **Banking Management System** developed in **C++** using **Object-Oriented Programming (OOP)** principles. This application simulates basic banking operations by allowing users to manage customers, accounts, and transactions through a simple menu-driven interface.

The project was built to strengthen core C++ programming skills, including class design, encapsulation, constructors, arrays of objects, and modular programming using separate header (`.h`) and source (`.cpp`) files.

---

## Features

- Create new customers
- Display all customers
- Search for a customer
- Create bank accounts
- Display all accounts
- Search for an account
- Deposit money
- Withdraw money
- Check account balance
- Deactivate (delete) an account
- Record banking transactions
- Display transaction history
- Menu driven console interface

---

## Technologies Used

- C++
- Object-Oriented Programming (OOP)
- Code::Blocks IDE
- Standard C++ Libraries (`iostream`, `string`)

---

## Project Structure

```
Banking Management System
│
├── include/
│   ├── Account.h
│   ├── Bank.h
│   ├── Customer.h
│   └── Transaction.h
│
├── src/
│   ├── Account.cpp
│   ├── Bank.cpp
│   ├── Customer.cpp
│   └── Transaction.cpp
│
├── main.cpp
└── Banking Management System.cbp
```

---

## Classes

### Customer
Manages customer information, including customer ID, name, phone number, address, and account status.

### Account
Stores account details such as account number, account holder, balance, PIN, and account status. It also provides deposit and withdrawal operations.

### Transaction
Records banking transactions, including transaction ID, account number, transaction type, amount, and transaction date.

### Bank
Acts as the main controller of the system by managing customers, accounts, and transactions, while providing the banking operations available through the menu.

---

## How to Run

1. Open the project in **Code::Blocks**.
2. Build the project.
3. Run the application.
4. Use the menu to perform banking operations.

---

## Learning Objectives

This project demonstrates:

- Object-Oriented Programming (OOP)
- Classes and Objects
- Constructors
- Encapsulation
- Arrays of Objects
- Modular Programming
- Header and Source File Separation
- Menu-Driven Applications

---

## Future Improvements

- File handling for permanent data storage
- User authentication with PIN verification
- Money transfer between accounts
- Interest calculation
- Transaction history by account
- Admin login system
- Improved input validation

---

## Author

Developed by **Nhlaka** as a C++ Object-Oriented Programming project.

---
