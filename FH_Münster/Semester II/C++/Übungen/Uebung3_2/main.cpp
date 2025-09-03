#include <iostream>
using namespace std;

class Flugzeug {
public:
    void fliegen () {
        std::println("Ich fliege!");
    }
};

class Auto {
public:
    void fahren() {
        std::println("Ich fahre!");
    }
};

class Longboard {
public:
    void rollen() {
        std::println("Ich rolle!!");
    }
};

class Fortbewegung {
public:
    static void sich_fortbewegen(Flugzeug &f) {
        f.fliegen();
    }

    static void sich_fortbewegen(Auto &a) {
        a.fahren();
    }

    static void sich_fortbewegen(Longboard &l) {
        l.rollen();
    }
};

int main() {

    Flugzeug f;
    Auto a;
    Longboard l;

    Fortbewegung::sich_fortbewegen(f);
    Fortbewegung::sich_fortbewegen(a);
    Fortbewegung::sich_fortbewegen(l);

    return 0;
}