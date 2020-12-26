#include <iostream>

int main() {

    int operation;

    std::cout << "Hello I am your calculater\n";
    std::cout << "What is the operation you wish to perform?\n";
    std::cout << "Type 0 to Multiply\n";
    std::cout << "Type 1 to Divide\n";
    std::cout << "Type 2 to Add\n";
    std::cout << "Type 3 to Subtract\n";
    std::cin >> operation;

    double num1;
    std::cout << "What is the first number you wish to use?\n";
    std::cin >> num1;
    
    double num2;
    std::cout << "What is the second number you wish to use?\n";
    std::cin >> num2;

    double final_answer;

    switch(operation) {
        case 0:
            final_answer = num1 * num2;
            break;
        case 1:
            final_answer = num1 / num2;
            break;
        case 2:
            final_answer = num1 + num2;
            break;
        case 3:
            final_answer = num1 - num2;
            break;
        default:
            std::cout << "Please select a valid operation";
            return 0;
    }
    
    if(operation <= 3) {
    std::cout << "Your answer is " << final_answer << "\n";
    }
    
}