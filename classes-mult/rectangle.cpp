#include "rectangle.hpp"

Rectangle::Rectangle(double newA, double newB) {
    a = newA;
    b = newB;
}

double Rectangle::area() {
    return a * b;
}

double Rectangle::perimeter() {
    return 2 * (a + b);
}