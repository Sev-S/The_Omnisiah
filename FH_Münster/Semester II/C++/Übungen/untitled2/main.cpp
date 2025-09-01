#include <string>
#include <print>

class Person {
private:
    std::string name;
public:
    Person(std::string name) {
        this->name = name;
    };
    std::string get_name() {
        return name;
    };
    bool ist(const Person& person)
};


bool check_identity(std::string name1, std::string name2) {
    if (&name1 != &name2) {
        return false;
    }
    return true;
}

int main() {
    Person realElvis("elvis");
    Person fakeElvis("elvis");
    if (check_identity(realElvis.get_name(), fakeElvis.get_name()) == true) {
        std::println ("Sie sind gleich");
    }
    std::println ("Sie sind nicht gleich");
}