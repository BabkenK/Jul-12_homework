#include <iostream>

 int my_isspace(char c);

 int my_isspace(char c) {
    if (c == ' ' || c == '\n' || c == '\t' || c == '\r' || c == '\v' || c == '\f') {
        return 1;  
    } else {
        return 0; 
    }
}

int main() {
    const int size = 100;
    char str[size] = {};

    std::cout << "Please enter a string: ";
    std::cin.getline(str, size);

    bool hasWhitespace = false;

     for (int i = 0; str[i] != '\0'; ++i) {
        if (my_isspace(str[i])) {
            hasWhitespace = true;
            break;  
        }
    }

    if (hasWhitespace) {
        std::cout << "The string '" << str << "' contains whitespace." << std::endl;
    } else {
        std::cout << "The string '" << str << "' does not contain whitespace." << std::endl;
    }

    return 0;
}
