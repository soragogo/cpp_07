#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <string>
# include <iostream>

template <typename T>
void swap(T & a, T & b) {
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T const & min(T const & a, T const & b) {
    return a < b ? a : b;
}

template <typename T>
T const & max(T const & a, T const & b) {
    return a > b ? a : b;
}

# define END             "\033[0m"
# define BOLD            "\033[1m"
# define BLACK           "\033[30m"
# define RED             "\033[31m"
# define GREEN           "\033[32m"
# define YELLOW          "\033[33m"
# define BLUE            "\033[34m"
# define MAGENTA         "\033[35m"
# define CYAN            "\033[36m"
# define WHITE           "\033[37m"
# define UNDERLINE       "\033[4m"
# define BOLD_UNDERLINE  "\033[1;4m"

#endif
