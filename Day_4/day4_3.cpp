#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;
    static double PI;

public:
    Circle() {}

    Circle(double radius) {
        this->radius = radius;
    }

    void calculateArea() {
        double area = PI * radius * radius;
        cout << "Area of Circle = " << area << endl;
    }

    static void setPI(double PI) {
        Circle::PI = PI;
    }

    static double getPI() {
        return PI;
    }

    static void calculateTotalAreaOfAllCircles(Circle arr[5]) {
        double totalArea = 0;
        for (int i = 0; i < 5; ++i) {
            totalArea += PI * arr[i].radius * arr[i].radius;
        }
        cout << "Total Area of All Circles = " << totalArea << endl;
    }
};

double Circle::PI = 3.14;

int main() {
    Circle arr[5];
    Circle::calculateTotalAreaOfAllCircles(arr);

    Circle c1(5);
    c1.calculateArea();

    Circle c2(7);
    c2.calculateArea();

    Circle c3(9);
    c3.calculateArea();

    // Circle::setPI(3.15); // Uncomment if you want to change PI
    cout << "PI = " << Circle::getPI() << endl;

    // Check size of Circle object
    cout << "Size of Circle object: " << sizeof(Circle) << " bytes" << endl;

    return 0;
}
