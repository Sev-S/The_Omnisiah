#include <print>

class Vektor3d {
public:
    Vektor3d(double _x, double _y, double _z) : x{_x}, y{_y}, z{_z} {
    }

    Vektor3d() = default;

private:
    double x{};
    double y{};
    double z{};
};

Vektor3d vec1{3.1, 1.5, 0.2};
Vektor3d vec2{1.0, 0.5, 0.2};
if(vec1 == vec2)
    std::println ("Die Vektoren sind gleich");
else
    std::println ("Die Vektoren sind ungleich");
// Ausgabe: "Die Vektoren sind ungleich"
