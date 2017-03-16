#ifndef LAB3_INTEGER_TINTEGER_H
#define LAB3_INTEGER_TINTEGER_H

#pragma once
#include <string>
#include "TCapacity.h"

class TInteger {
private:
    int Value;
public:
    TInteger()
    {}

    TInteger(const long long data)
    {
        if (CheckCapacity(data))
        {
            Value = data;
        }
    }

    ~TInteger()
    {}

    operator int()
    {
        return Value;
    }

    // Арифметические операторы(+ div, mod)
    TInteger &operator=(const TInteger &rhs)
    {
        Value = rhs.Value;
        return *this;
    }
    TInteger &operator=(const long long rhs)
    {
        if (CheckCapacity(rhs))
        {
            Value = rhs;
        }
        return *this;
    }

    TInteger &operator+=(const TInteger &rhs)
    {
        if (CheckCapacity(Value + rhs.Value))
        {
            Value = Value + rhs.Value;
        }
        return *this;
    }
    TInteger &operator+=(const long long rhs)
    {

        if (CheckCapacity(Value + rhs))
        {
            Value = Value + rhs;
        }
        return *this;
    }

    TInteger &operator-=(const TInteger &rhs)
    {
        if (CheckCapacity(Value - rhs.Value))
        {
            Value = Value - rhs.Value;
        }
        return *this;
    }
    TInteger &operator-=(const long long rhs)
    {
        if (CheckCapacity(Value - rhs))
        {
            Value = Value - rhs;
        }
        return *this;
    }

    TInteger &operator*=(const TInteger &rhs)
    {
        if (CheckCapacity(Value * rhs.Value))
        {
            Value = Value * rhs.Value;
        }
        return *this;
    }
    TInteger &operator*=(const long long rhs)
    {
        if (CheckCapacity(Value * rhs))
        {
            Value = Value * rhs;
        }
        return *this;
    }

    TInteger &operator/=(const TInteger &rhs)
    {
        Value /= rhs.Value;
        return *this;
    }
    TInteger &operator/=(const long long rhs)
    {
        Value /= rhs;
        return *this;

    }

    TInteger &operator%=(const TInteger &rhs)
    {
        Value %= rhs.Value;
        return *this;
    }
    TInteger &operator%=(const long long rhs)
    {
        Value %= rhs;
        return *this;
    }

    // Логические операторы
    bool operator==(const TInteger &rhs) const
    {
        return (Value == rhs.Value);
    }
    bool operator==(const long long rhs) const
    {
        return (Value == rhs);
    }

    bool operator<=(const TInteger &rhs) const
    {
        return (Value <= rhs.Value);
    }
    bool operator<=(const long long rhs) const
    {
        return (Value <= rhs);
    }

    bool operator>=(const TInteger &rhs) const
    {
        return (Value >= rhs.Value);
    }
    bool operator>=(const long long rhs) const
    {
        return (Value >= rhs);
    }


    friend std::ostream &operator<<(std::ostream &out, const TInteger &rhs);
};

std::ostream &operator<<(std::ostream &out, const TInteger &rhs)
{
    out << rhs.Value;
    return out;
}


TInteger operator+(const TInteger &a, const TInteger &b)
{
    TInteger res = a;
    return res += b;
}
TInteger operator+(const TInteger &a, const long long data)
{
    TInteger res = a;
    return res += data;
}
TInteger operator+(const long long data, const TInteger &a)
{
    TInteger res = a;
    return res += data;
}

TInteger operator-(const TInteger &a, const TInteger &b)
{
    TInteger res = a;
    return res -= b;
}
TInteger operator-(const TInteger &a, const long long data)
{
    TInteger res = a;
    return res -= data;
}
TInteger operator-(const long long data, const TInteger &a)
{
    TInteger res = a;
    return res -= data;
}

TInteger operator*(const TInteger &a, const TInteger &b)
{
    TInteger res = a;
    return res *= b;
}
TInteger operator*(const TInteger &a, const long long data)
{
    TInteger res = a;
    return res *= data;
}
TInteger operator*(const long long data, const TInteger &a)
{
    TInteger res = a;
    return res *= data;
}

TInteger operator/(const TInteger &a, const TInteger &b)
{
    TInteger res = a;
    return res /= b;
}
TInteger operator/(const TInteger &a, const long long data)
{
    TInteger res = a;
    return res /= data;
}
TInteger operator/(const long long data, const TInteger &a)
{
    TInteger res = a;
    return res /= data;
}

TInteger operator%(const TInteger &a, const TInteger &b)
{
    TInteger res = a;
    return res %= b;
}
TInteger operator%(const TInteger &a, const long long data)
{
    TInteger res = a;
    return res %= data;
}
TInteger operator%(const long long data, const TInteger &a)
{
    TInteger res = a;
    return res %= data;
}

bool operator!=(const TInteger &a, const TInteger &b)
{
    return !(a == b);
}
bool operator!=(const TInteger &a, const long long data)
{
    return !(a == data);
}
bool operator!=(const long long data, const TInteger &a)
{
    return !(a == data);
}

bool operator<(const TInteger &a, const TInteger &b)
{
    return !(a >= b);
}
bool operator<(const TInteger &a, const long long data)
{
    return !(a >= data);
}
bool operator<(const long long data, const TInteger &a)
{
    return !(a >= data);
}

bool operator>(const TInteger &a, const TInteger &b)
{
    return !(a <= b);
}
bool operator>(const TInteger &a, const long long data)
{
    return !(a <= data);
}
bool operator>(const long long data, const TInteger &a)
{
    return !(a <= data);
}




#endif //LAB3_INTEGER_TINTEGER_H
