#include <iostream>
#include "TInteger.h"
int main()
{
    long long b;

    TInteger a = 8;
    int z(a);
    std::cout << a << " == " << z << std::endl;

    std::cout << std::endl;

    try {
        a = 3000000000;
        std::cout << a << std::endl;
    }catch (const CapacityError & e) {
        std::cout << "CapacityError" << std::endl;
    }

    std::cout << std::endl;

    try {
        a = 999999;
        b = 7777777777;
        a += b;
        std::cout << a << std::endl;
    }catch(const CapacityError & e) {
        std::cout << "CapacityError" << std::endl;
    }

    std::cout << std::endl;

    try {
        a = 38888;
        a *= 99999;
        std::cout << a << std::endl;
    }catch (const CapacityError & e) {
        std::cout << "CapacityError" << std::endl;
    }

    std::cout << std::endl;

    b = a = 322;
    if(b != a){
        std::cout << "a != b" << std::endl;
    }else{
        std::cout << "a == b" << std::endl;
    }


    return 0;
}