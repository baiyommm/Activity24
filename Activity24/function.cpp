#include <iostream>
#include "header.h"

namespace CustomerFunctions {

    void customerDetails(Customer& customer) {
        
        cout << "Enter Customer ID: ";
        getline(cin, customer.id);
        
        cout << "Enter Customer Name: ";
        getline(cin, customer.name);

        cout << "Enter Customer Email: ";
        getline(cin, customer.email);
    }

    void displayCustomer(const Customer& customer) {
        
        cout << "Customer Details:" << endl;
        cout << "ID: " << customer.id << endl;
        cout << "Name: " << customer.name << endl;
        cout << "Email: " << customer.email << endl;
    }
}
