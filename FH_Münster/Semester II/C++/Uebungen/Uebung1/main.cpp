#include <print>
using namespace std;
int a = 3;
void foo()
{ a -= 3;
    int b = a - 1;
}
int main() {
    int b = a;
    a--;
    {
        int c = b;
        b++;
        println("{}", a);
        println("{}", b);
        println("{}", c);
    }
    foo();
    int c = b;
    println("{}", a);
    println("{}", b);
    println("{}", c);
}