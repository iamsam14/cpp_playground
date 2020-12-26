#include <iostream>
#include "my_atm.hpp"

int main() {
    int sign_in;
    int passcode;
    int tries = 0;
    int money = 50;
    int wallet = 0;
    int menu_choice;
    std::string name;

    std::cout << "Hello and welcome to myHouz ATM!\nPlease enter your name and create a 4 digit passcode\n";

    std::cout << "What is your name?\n";
    std::cin >> name;
    
    do {
    std::cout << "What is your 4 digit passcode?\n";
    std::cin >> passcode;
    } while(passcode > 9999 || passcode < 1000);

    Atm account(name, passcode, money);

    do {
        std::cout << "What would you like to do?\n";
        std::cout << "Type 0 to login\n";
        std::cout << "Type 1 to logout\n";
        std::cin >> sign_in;

        if(sign_in == 1) {
            std::cout << "Thank you for choosing myHouz for all of your banking needs.\nHave a greate= day!\n";
            return 0;
        } else if(sign_in == 0) {
            int entry_code = account.get_passcode();
            do {
                std::cout << "Please enter your passcode\n";
                std::cin >> passcode;
                if(entry_code != passcode) {
                    std::cout << "Incorrect code\n";
                } else {
                    std::cout << "Thank you for choosing myHouz for all your banking needs\n\nLogging in...\n\n";
                }
                tries++;
                if(tries > 2) {
                    std::cout << "Too many login attempts\nYour account has been frozen\nPlease contact customer service for further assistance\nHave a great day!\n";
                    return 0;
                }
            } while(passcode != entry_code);
        }
    } while(sign_in < 0 || sign_in > 1);

    do {
        std::cout << "Hello " << name << "\n";
        std::cout << "What would you like to do now?\n";
        std::cout << "Type 0 to check your balance\n";
        std::cout << "Type 1 to deposit\n";
        std::cout << "Type 2 to withdraw from your account\n";
        std::cout << "Type 3 to log out of your account\n";
        std::cin >> menu_choice;

        switch(menu_choice) {
            case 0:
                account.see_account_details();
                break;
            case 1:
                account.deposit(wallet);
                break;
            case 2:
                account.withdraw(wallet);
                break;
            case 3:
                std::cout << "Thank you for choosing myHouz for all your banking needs\nHave a great day!\n";
                break;
            default:
                std::cout << "Please select an option off the menu";
        }
    } while(menu_choice !=3);
}