#include <iostream>

class Atm {

    int balance;
    int passcode;
    std::string name;
    
    public:

    Atm(std::string name, int passcode, int balance);

    int get_passcode();
    int deposit(int &wallet);
    int withdraw(int &wallet);
    void see_account_details();

    ~Atm();
};