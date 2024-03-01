#include <iostream>
#include <cmath>

class Area {
public:
    virtual double area() const = 0;
};

class Perimeter {
public:
    virtual double perimeter() const = 0;
};

// trida shape implementuje rozhrani area a perimeter
class Shape : public Area, public Perimeter {
public:
    virtual double area() const override { return 0.0; }
    virtual double perimeter() const override { return 0.0; }
};

// trida circle reprezentuje kruh a dedi z tridy shape
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    virtual double area() const override {
        return 3.14159 * radius * radius;
    }

    virtual double perimeter() const override {
        return 2 * 3.14159 * radius;
    }
};

// trida square reprezentuje ctverec a dedi z tridy shape
class Square : public Shape {
private:
    double sideLength;

public:
    Square(double a) : sideLength(a) {}
    virtual double area() const override {
        return sideLength * sideLength;
    }

    virtual double perimeter() const override {
        return 4 * sideLength;
    }
};

int main() {
    std::cout << "Square perimeter: " << Square(5).perimeter() << std::endl; // 20
    std::cout << "Circle perimeter: " << Circle(5).perimeter() << std::endl; // 31.4159
    std::cout << "Square area: " << Square(5).area() << std::endl; // 25
    std::cout << "Circle area: " << Circle(5).area() << std::endl; // 78.53

    return 0;
}
