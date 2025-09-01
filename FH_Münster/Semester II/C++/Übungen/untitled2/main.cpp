#include <string>

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
};


bool check_identity(std::string name1, std::string name2) {
    if (&name1 != &name2) {
        return false;
    }
    return true;
}

int main() {
    Person realElvis(std::string elvis);
    Person fakeElvis(std::string elvis);
    check_identity(realElvis.get_name(), fakeElvis.get_name());
}