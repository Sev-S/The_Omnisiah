#include <iostream>
#include <print>
using namespace std;

class Vortbewegungsmittel {
    public:
    virtual void bewegen () = 0;
};

class Flugzeug : public Vortbewegungsmittel {
public:
    void bewegen () {
        std::println("Ich fliege!");
    }
};

class Auto : public Vortbewegungsmittel {
public:
    void bewegen() {
        std::println("Ich fahre!");
    }
};

class Longboard : public Vortbewegungsmittel {
public:
    void bewegen() {
        std::println("Ich rolle!!");
    }
};

class Fahrrad : public Vortbewegungsmittel {
    public:
    void bewegen() {
        std::println("Ich radel!");
    }
};

class Fortbewegung {
public:
    static void sich_fortbewegen(Vortbewegungsmittel &v) {
        v.bewegen();
    }
};

int main() {

    Flugzeug f;
    Auto a;
    Longboard l;
    Fahrrad f2;

    Fortbewegung::sich_fortbewegen(f);
    Fortbewegung::sich_fortbewegen(a);
    Fortbewegung::sich_fortbewegen(l);
    Fortbewegung::sich_fortbewegen(f2);

    return 0;
}