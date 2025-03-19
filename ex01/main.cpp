#include "iter.hpp"


void echo(int const & n) {
    std::cout << n << "!" << std::endl;
}

template <typename T>
void echo(T const & a) {
    std::cout << a << "!" << std::endl;
}

int main() {
    int array0[] = {0, 1, 2};
    std::string array1[] = {"Apple", "Banana", "Chocolate"};
    iter(array0, 3, echo);
    iter(array1, 3, echo);
}
