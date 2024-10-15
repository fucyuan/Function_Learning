#include <iostream>

int fact(int i){
    int result = 1;
    while(i > 1){
        result *= i;
        i--;
    }
    return result;
}

int main() {
    int number;
    std::cout << "输入数字 " ;
    std::cin>>number;
    std::cout << "Factorial of " << number << " is " << fact(number) << std::endl;
    return 0;
}
