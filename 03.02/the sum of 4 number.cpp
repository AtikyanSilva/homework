#include <iostream>
int main () {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    std::cin >> a;
    b = a / 1000;
    c = (a - (b * 1000)) / 100;
    d = (a - (b * 1000) - (c * 100)) / 10;
    a = (a - (b * 1000) - (c * 100)) % 10;
    std::cout << a + b + c + d;
}
