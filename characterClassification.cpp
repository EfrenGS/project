#include <iostream>

int main()
    char character;

    std::cout << "A";
    std::cin >> character;

    if(character >= 'A' || character <='Z')
        std:: cout << "The character is an upercase letter." << std::endl;
    else if (character >= 'a' || character <= 'z') 
        std::cout << "The character is a lowercase letter" << std::endl;
    else 
        std::cout << "The character is not a letter" << std::endl;

return 0;