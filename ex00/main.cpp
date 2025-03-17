#include "main.hpp"

int main() {
    int a = 1;
    int b = 2;
    std::cout << "a: "<< a << " b: " << b << std::endl;
    std::cout << "min: " << min(a, b) << std::endl;
    std::cout << "max: " << max(a, b) << std::endl;
    swap(a, b);
    std::cout << "a: "<< a << " b: " << b << std::endl;

    std::cout << "--------------------------------------------------" << std::endl;
    std::string c = "Hello";
    std::string d = "World";
    std::cout << "c: "<< c << " d: " << d << std::endl;
    std::cout << "min: " << min(c, d) << std::endl;
    std::cout << "max: " << max(c, d) << std::endl;
    swap(c, d);
    std::cout << "c: "<< c << " d: " << d << std::endl;


    std::cout << "--------------------------------------------------" << std::endl;
    float e = 1.11111;
    float f = 2.22222;
    std::cout << "e: "<< e << " f: " << f << std::endl;
    std::cout << "min: " << min(e, f) << std::endl;
    std::cout << "max: " << max(e, f) << std::endl;
    swap(e, f);
    std::cout << "e: "<< e << " f: " << f << std::endl;

    std::cout << "--------------------------------------------------" << std::endl;
    std::string g = "Hello";
    std::string h = "World";
    std::cout << "g: "<< g << " h: " << h << std::endl;
    std::cout << "min: " << min(g, h) << std::endl;
    std::cout << "max: " << max(g, h) << std::endl;
    swap(g, h);
    std::cout << "g: "<< g << " h: " << h << std::endl;

    std::cout << "--------------------------------------------------" << std::endl;
    bool i = true;
    bool j = false;
    std::cout << "i: "<< i << " j: " << j << std::endl;
    std::cout << "min: " << min(i, j) << std::endl;
    std::cout << "max: " << max(i, j) << std::endl;
    swap(i, j);
    std::cout << "i: "<< i << " j: " << j << std::endl;

    return (0);
}
