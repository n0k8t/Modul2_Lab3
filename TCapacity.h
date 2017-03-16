#ifndef LAB3_INTEGER_TCAPACITY_H
#define LAB3_INTEGER_TCAPACITY_H

#include <iostream>
#include <exception>

class CapacityError : public std::exception
{

};

bool CheckCapacity(const long long &data)
{
    if (data > 2147483647)
    {
        throw CapacityError();
    }else if(data < -2147483648)
    {
        throw CapacityError();
    }

    return true;
}


#endif //LAB3_INTEGER_TCAPACITY_H
