#include <print>
#include <stdlib.h>

class Quadrat {
    public:
        Quadrat(int groesse) : groesse(groesse) {};
    void zeichnen() {
        std::print("Hallo ich bin ein Quadrat der Größe {}", groesse);
    }
    private:
        int groesse;
};

int main_ungru() {
    Quadrat *quad {new Quadrat[5]};
    quad->zeichnen();
    delete Quadrat;
    return EXIT_SUCCESS;
}

int main_tj() {
    Quadrat *quad {new Quadrat(5)};
    quad->zeichnen();
    delete quad;
}