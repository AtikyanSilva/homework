#include <iostream>
int main() {
    int number = 0;
    int result = 0;
    std::cout << "Please enter a number: ";
    std::cin >> number;
    number = abs(number);
    while (number > 0) {
        result += number % 10;
        number /= 10; 
    }
    std::cout << "The result is: ";
    std::cout << result;
}
