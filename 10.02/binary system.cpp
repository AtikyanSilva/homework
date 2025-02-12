#include <iostream>
#include <algorithm>

int main() {
    int number = 0;
    std::cout << "Please enter a number: ";
    std::cin >> number;
    
    std::cout << "The result is: ";
    
    if (number == 0) {
        std::cout << 0;
    } else {
        std::string result = "";
        while (number > 0) {
            result += std::to_string(number % 2);
            number /= 2;
        }
        std::reverse(result.begin(), result.end());
        std::cout << result;
    }
    
    std::cout << std::endl;
    return 0;
}
