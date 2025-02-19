#include "libB.hpp"

MyClassB::MyClassB() {
    y = 20;
}

void MyClassB::echoMyClassB() {
    std::cout << "ECHO MyClassB: " << y << std::endl;
}