#include "libA.hpp"

MyClassA::MyClassA() {
    x = 10;
}

void MyClassA::echoMyClassA() {
    std::cout << "ECHO MyClassA: " << x << std::endl;
}