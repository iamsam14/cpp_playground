#include "my_atm.hpp"
#include <iostream>

Atm::Atm(std::string account_name, int secret_code, int money) 
: name(account_name), passcode(secret_code), balance(money) {};

int Atm::get_passcode() {
    return passcode;
}

int Atm::deposit(int &wallet) {
    if(wallet == 0) {
        std::cout << "Not enough funds in your wallet\n";
        return 0;
    }
    int num;
    do {
    if(wallet > 0 && num > wallet) std::cout << "Not enough funds in your wallet.\n";
    if(num < 0) std::cout << "Please select a valid amount.\n";
    std::cout << "how much would you like to deposit today?\n";
    std::cin >> num;
    } while((wallet < num && wallet > 0) || num <= 0);
    balance += num;
    wallet -= num;
    std::cout << "Your balance is now $" << balance << " in your account.\n";
    std::cout << "You have $" << wallet << " in your wallet.\n";
    return 0;
}

int Atm::withdraw(int &wallet) {
    if(balance == 0) {
        std::cout << "Not enough funds in your balance";
        return 0;
    }
    int num;
    do {
    if(balance > 0 && num > balance) std::cout << "Not enough funds in your balance.\n";
    if(num < 0) std::cout << "Please enter a valid amount.\n";
    std::cout << "how much would you like to withdraw today?\n";
    std::cin >> num;
    } while((balance < num && balance > 0) || num <= 0);
    balance -= num;
    wallet += num;
    std::cout << "Your balance is now $" << balance << ".\n";
    std::cout << "You now have $" << wallet << " in your wallet.\n";
    return 0;
}

void Atm::see_account_details() {
        std::cout << "Your balance is: $" << balance << "\n";
    }

Atm::~Atm() {}