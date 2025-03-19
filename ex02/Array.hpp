#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <string>
# include <iostream>
# include <stdexcept>

template <typename T>
class Array{
public:
    Array();
    Array(size_t const & size);
    ~Array();
    Array(const Array<T>& array);

    Array<T>& operator=(const Array<T>& array);
    T& operator[](size_t const & n);

    size_t size();

private:
    size_t _size;
    T * _data;

};

template <class T>
Array<T>::Array() :  _size(0),  _data(NULL) {}

template <class T>
Array<T>::Array(size_t const & size) : _size(size) {
    if (size > 0)
        _data = new T[_size];
    else
        _data = NULL;
}

template <class T>
Array<T>::~Array() {
    if (_data)
        delete[] _data;
}

template <class T>
Array<T>::Array(const Array<T>& array) : _size(array._size) {
    if (_size > 0) {
        _data = new T[_size];
        for (size_t i = 0; i < _size; i++) {
            _data[i] = array._data[i];
        }

    } else {
        _data = NULL;
    }
}

template <class T>
Array<T>& Array<T>::operator=(const Array<T>& array) {
    _size = (array._size);
    if (this != &array) {
        if (_size > 0) {
            _data = new T[_size];
            for (size_t i = 0; i < _size; i++)
                _data[i] = array._data[i];
        }
        else {
            _data = NULL;
        }
    }
    return *this;
}

template <class T>
T& Array<T>::operator[](size_t const & n) {
    if (n >= _size) {
        throw std::out_of_range("Index out of range");
    }
    return _data[n];
}

template <class T>
size_t Array<T>::size() {
    return _size;
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
