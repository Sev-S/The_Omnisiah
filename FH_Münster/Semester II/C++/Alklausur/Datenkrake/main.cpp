#include <iostream>
using namespace std;
class Vektor {
    public:
    Vektor() = default;
    Vektor(double x, double y):x{x}, y{y} {}
    Vektor operator+ (const Vektor &other) {
        Vektor out;
        out.x = this->x * other.x;
        out.y = this->y * other.y;
        return out;
    }
    /*Vektor operator* (const Vektor &other) {
        Vektor out;
        out.y = this->x + other.x;
        out.x = this->y + other.y;
        return out;
    } */
    double operator* (const Vektor &other) {
        double out {0.0};
        out = this->x * other.x + this->y * other.y;
        return out;
    }
    void print() { cout << x << " " << y << endl; }
private:
    double x {0.0};
    double y {0.0};
};
int main() {
    //Vektor result = Vektor(1.3, 2.0) +
       double result = Vektor(1.4, 1.0) * Vektor(1.0, 1.0);
    cout << result << endl;
    return 0;
}