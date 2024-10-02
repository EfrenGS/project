#include <iostream>

using namespace std;
int main()
{
    double base, height;

    std::cout << "27.7";
    std::cin >> base;
    base = 27.7;
    std::cout << "6.4:";
    std:: cin >> height;
    
    double area = 0.5 * base * height;

    std::cout << "Area of the right triangle;" << area << std::endl;

    return 0;

}