#include <set>
#include <string>

class Person;

class Ort {
    private:
        std::set<Person*> bewohner;
    public:
        void add_bewohner(Person* person) {
            bewohner.insert(person);
    }
};

class Person {
    private:
        std::set wohnort;
    public:
        void add_wohnort(Wohnort* wohnort)
};