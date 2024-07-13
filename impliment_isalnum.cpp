#include <iostream>

int my_isalnum(char c);

int my_isalnum(char c){
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
          return 1;
      }else {
          return 0;
      }
}

int main  () {
    const int size = 100;
    char str[size] = {};
    
    std::cout << "Please enter string: ";
    std::cin.getline(str, size);
    
    for (int i = 0; str[i] != '\0'; ++i) {
    if(my_isalnum(str[i])){
        std::cout << str[i] << " is alphanumerical." << "\n";
    }else{
        std::cout << str[i] << " is not alphanumerical." << std::endl;
        }
    }
    return 0;
}