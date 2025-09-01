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
    bool ist(const Person& person) {
        if (this == &person) {
            return true;
        }
        return false;
    }
};


bool check_identity(Person person1, Person person2) {
    if (&person1 != &person2) {
        return false;
    }
    return true;
}

int main() {
    Person realElvis("elvis");
    Person fakeElvis("elvis");
    if (check_identity(realElvis, fakeElvis) == true) {
        std::println ("Sie sind gleich");
    }
    std::println ("Sie sind nicht gleich");
}