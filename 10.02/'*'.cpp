#include <iostream>
int main() {
    int number = 0;
    std::cout << "Please enter a number: ";
    std::cin >> number;
    for (int i = 1; i <= number; i++) {
        std::cout << std::string(number - i, ' ');
        std::cout << std::string(2 * i - 1, '*');
        std::cout << std::endl;
    }
}
