#include <iostream>

char my_toupper(char c);


char my_toupper(char c){
    if(c >='a'&& c <= 'z'){
        return c - ('a'- 'A');
    }else{
        return c;
    }
}

int main  () {
    const int size = 100;
    char str[size] = {};
    char uppercasestr[size] = {};
    
    std::cout << "Please enter string: ";
    std::cin.getline(str, size);
    
    int i = 0;
    while(str[i] != '\0'){
        uppercasestr[i] = my_toupper(str[i]);
        ++i;
    }
    uppercasestr[i] = '\0';
    
    std::cout << "Original string was: " << str << "\n";
    std::cout << "uppercase string is: " << uppercasestr << std::endl;
    
    return 0;
} 