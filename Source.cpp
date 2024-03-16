#include <iostream>
using namespace std;
class Geometry {
private:
    static int countCalculations;
public:
    static int getCountCalculations() {
        return countCalculations;
    }
    static float triangleArea(float base, float height) {
        countCalculations++;
        return 0.5 * base * height; 
    }
    static float rectangleArea(float length, float width) {
        countCalculations++;
        return length * width;
    }
    static float squareArea(float side) {
        countCalculations++;
        return side * side;
    }
    static float rhombusArea(float diagonal1, float diagonal2) {
        countCalculations++;
        return 0.5 * diagonal1 * diagonal2;
    }
};
int Geometry::countCalculations = 0;
int main() {
    float base = 5.0;
    float height = 8.0;
    cout << "Площа трикутника: " << Geometry::triangleArea(base, height) << endl;
    float length = 6.0;
    float width = 4.0;
    cout << "Площа прямокутника: " << Geometry::rectangleArea(length, width) << endl;
    float side = 5.0;
    cout << "Площа квадрата: " << Geometry::squareArea(side) << endl;
    float diagonal1 = 6.0;
    float diagonal2 = 8.0;
    cout << "Площа ромба: " << Geometry::rhombusArea(diagonal1, diagonal2) << endl;
    cout << "Кількість підрахунків площі: " << Geometry::getCountCalculations() << endl;
    return 0;
}