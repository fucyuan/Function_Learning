#include <iostream>

int abs(int x) {
    return (x < 0) ? -x : x;
}

int main() {
    int number;
    std::cout << "输入数字 " ;
    std::cin>>number;
    std::cout << "The absolute value of " << number << " is " << abs(number) << std::endl;
    return 0;
}
