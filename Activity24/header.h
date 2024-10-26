#ifndef HEADER_H
#define HEADER_H
#include <string>
using namespace std;

struct Customer {
    
    string id;
    string name;
    string email;
};

namespace CustomerFunctions {

    void customerDetails(Customer& customer);
    void displayCustomer(const Customer& customer);
}

#endif
