#include "common.hpp"
#include "libA.hpp"
#include "libB.hpp"

int main()
{
    std::string s1 = "Hello";
    MyClassA myClassA{};
    MyClassB myClassB{};

    std::cout << s1 << std::endl;
    myClassA.echoMyClassA();
    myClassB.echoMyClassB();
    
    return 0;
}
