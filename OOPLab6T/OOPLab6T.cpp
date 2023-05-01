﻿// OOPLab3Tpl.cpp : Цей файл містить є шаблоном для 
// виконання лаб. роботи №6. 
// Він містинь функцію "main" з якої починається та закінчується виконання програми.
//
#include <iostream>
using namespace std;

class Figure {
public:
    virtual double perimeter() = 0;
};

class Rectangle : public Figure {
private:
    double width, height;
public:
    Rectangle(double w, double h) {
        width = w;
        height = h;
    }
    double perimeter() {
        return 2 * (width + height);
    }
};

class Circle : public Figure {
private:
    double radius;
public:
    Circle(double r) {
        radius = r;
    }
    double perimeter() {
        return 2 * 3.14159 * radius;
    }
};

class RightTriangle : public Figure {
private:
    double a, b, c;
public:
    RightTriangle(double side1, double side2) {
        a = side1;
        b = side2;
        c = sqrt(a * a + b * b);
    }
    double perimeter() {
        return a + b + c;
    }
};

class Trapezoid : public Figure {
private:
    double base1, base2, side1, side2;
public:
    Trapezoid(double b1, double b2, double s1, double s2) {
        base1 = b1;
        base2 = b2;
        side1 = s1;
        side2 = s2;
    }
    double perimeter() {
        return base1 + base2 + side1 + side2;
    }
};

int main() {
    Rectangle r(5, 7);
    Circle c(3);
    RightTriangle t(3, 4);
    Trapezoid z(3, 5, 2, 4);

    cout << "Perimeter of rectangle: " << r.perimeter() << endl;
    cout << "Perimeter of circle: " << c.perimeter() << endl;
    cout << "Perimeter of right triangle: " << t.perimeter() << endl;
    cout << "Perimeter of trapezoid: " << z.perimeter() << endl;

    return 0;
}
