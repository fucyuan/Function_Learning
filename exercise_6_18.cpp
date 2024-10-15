#include <iostream>
#include <string>
#include <cctype> // 用于 isupper 和 tolower

// 判断字符串中是否包含大写字母
bool has_uppercase(const std::string& s) {
    for (char c : s) {
        if (isupper(c)) {
            return true;
        }
    }
    return false;
}

// 将字符串中的所有字符转换为小写
void to_lowercase(std::string& s) {
    for (char& c : s) {
        c = tolower(c);
    }
}

int main() {
    std::string str;

    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    // 检查字符串是否包含大写字母
    if (has_uppercase(str)) {
        std::cout << "The string contains uppercase letters." << std::endl;
    } else {
        std::cout << "The string does not contain uppercase letters." << std::endl;
    }

    // 将字符串转换为小写
    to_lowercase(str);
    std::cout << "The string in lowercase is: " << str << std::endl;

    return 0;
}
