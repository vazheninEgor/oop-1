#include <iostream>
#include "rectangle.hpp"
#include "rectangle.cpp"


int main() {
    Rectangle rectangle1;
    std::cout << "Area 1: " << rectangle1.area() << "\n";
    std::cout << "Perimeter 1: " << rectangle1.perimeter() << "\n";

    Rectangle rectangle2(8.3, 5.6);
    std::cout << "Area 2: " << rectangle2.area() << "\n";
    std::cout << "Perimeter 2: " << rectangle2.perimeter() << "\n";
}