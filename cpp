#include <iostream>
using namespace std;

class CShape {
protected:
    string color;
public:
    CShape(string c) : color(c) {}
    virtual double getArea() const = 0;
};

class CTriangle : public CShape {
private:
    double sideA, sideB, sideC;
public:
    CTriangle(double a, double b, double c) : CShape("紅色"), sideA(a), sideB(b), sideC(c) {}

    double getArea() const override {
        return 0.5 * sideA * sideB;
    }
};
