#include <iostream>
int main() {
    int a = 0;
    char d = ' ';
    int b = 0;
    std::cout << "Please enter first number: ";
    std::cin >> a;
    std::cout << "Please enter arithmetic opperation: ";
    std::cin >> d;
    std::cout << "Please enter second number: ";
    std::cin >> b;
    switch(d) {
        case '-':
            std::cout << a - b << "\n";
            break;
        case '+':
            std::cout << a + b << "\n";
            break;
        case '*':
            std::cout << a * b << "\n";
            break;
        case '/':
            if (b != 0) {
                std::cout << a / b << "\n";
                break;
            }
            else {
                std::cout << "Error: Division by zeru\n";
            }   
        default:
            std::cout << "Error: Invalid operation\n";   
        return 0;
    }
}
