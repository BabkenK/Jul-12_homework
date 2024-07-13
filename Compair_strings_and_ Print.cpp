#include <iostream>

int my_strcmp(const char * str1, const char * str2);


int main()
{
    char str1[100] = {};
    char str2[100] = {};
    
    std::cout << "Please enter the first string: "; 
    std::cin.getline(str1, sizeof(str1));
    
    std::cout << "Please enter the second string: ";
    std::cin.getline(str2, sizeof(str2));
    
    int result = my_strcmp(str1, str2);
    
    if(result < 0){
        std::cout << "First string is less then second one: " << std::endl;
    } else if (result > 0) {
        std::cout << "First string is more then second one: " << std::endl;
    } else {
        std::cout << "Both strings are equals: " << std::endl;
    }

    return 0;
}

int my_strcmp(const char * str1, const char * str2){
    while (*str1 &&(*str1 == *str2) ){
        ++str1;
        ++str2;
    }

    return  *str1 - *str2; 
}