#include "iter.hpp"

template <typename T>
void echo(T const & a) {
    std::cout << a << std::endl;
}

int main() {
    std::string array1[] = {"a", "b", "c"};
    iter(array1, 3, echo);
}
