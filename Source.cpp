#include <iostream>
using namespace std;
class Point {
private:
    static int countInstances;
    float x, y;
public:
    Point() : Point(0.0, 0.0) {}
    Point(float x, float y) : x(x), y(y) {
        countInstances++;
    }
    static int getCountInstances() {
        return countInstances;
    }
};
int Point::countInstances = 0;
class Fraction {
private:
    static int countInstances;
    int numerator, denominator;
public:
    Fraction() : Fraction(0, 1) {} 
    Fraction(int numerator, int denominator) : numerator(numerator), denominator(denominator) {
        countInstances++;
    }
    static int getCountInstances() {
        return countInstances;
    }
};
int Fraction::countInstances = 0;
class Student {
private:
    static int countInstances;
    string name;
    int age;
public:
    Student() : Student("", 0) {} 
    Student(const std::string& name, int age) : name(name), age(age) {
        countInstances++;
    }
    static int getCountInstances() {
        return countInstances;
    }
};
int Student::countInstances = 0;
int main() {
    Point p1;
    Point p2(3.5, 2.0);
    cout << "Кількість екземплярів класу Point: " << Point::getCountInstances() << endl;
    Fraction f1;
    Fraction f2(3, 4);
    cout << "Кількість екземплярів класу Fraction: " << Fraction::getCountInstances() << endl;
    Student s1;
    Student s2("John", 20);
    cout << "Кількість екземплярів класу Student: " << Student::getCountInstances() << endl;
    return 0;
}