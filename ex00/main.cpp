#include "main.hpp"

struct S {
    float x;
    int y;
};

int main() {
    int a = 1;
    int b = 2;
    swap(a, b);
    std::cout << "a: "<< a << " b: " << b << std::endl;

    std::string c = "Hello";
    std::string d = "World";
    swap(c, d);
    std::cout << "c: "<< c << " d: " << d << std::endl;

    S* p = new S();
    S* q = new S();
    p->x = 3.14;
    p->y = 314;

    q->x = 5.55;
    q->y = 555;

    swap(p, q);
    std::cout << "p->x: "<< p->x << " p->y: " << p->y << std::endl;
    std::cout << "q->x: "<< q->x << " q->y: " << q->y << std::endl;
    return (0);
}
