#include <print>

class Quadrat {
    public:
        Quadrat(int groesse) : groesse(groesse) {};
    void zeichnen() {
        std::print("Hallo ich bin ein Quadrat der Größe {}", groesse);
    }
    private:
        int groesse;
};