#include <iostream>

int main() {
    int height;

    do {
    std::cout << "Height from 1 - 8\n";
    std::cin >> height;
    } while(height > 8 || height < 1);

    std::string hash = "";
    for(int i = 1; i <= height; i++) {
        int spaces = height;
        while(spaces - i > 0) {
            std::cout << " ";
            spaces--;
        }
        hash += "#";
        std::cout << hash << "\n";
    }
}