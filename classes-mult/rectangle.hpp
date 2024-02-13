#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
public:
    Rectangle() = default;
    Rectangle(double newA, double newB);
    double area();
    double perimeter();

private:
    double a{ 0.0 };
    double b{ 0.0 };
};

#endif