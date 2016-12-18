#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED


#include<iostream>
using namespace std;
class complex
{
public:
    complex()
    {
        real=imag=0;
    }
    complex(double r, double i)
    {
        real = r, imag = i;
    }
    complex operator +(const complex &c){
        return complex(real + c.real, imag + c.imag);
    }
    complex operator -(const complex &c){
        return complex(real - c.real, imag - c.imag);
    }
    complex operator *(const complex &c);
    complex operator /(const complex &c);
    friend void print(const complex &c);
private:
    double real, imag;
};

/*
inline complex complex::operator +(const complex &c)
{
return complex(real + c.real, imag + c.imag);
}

inline complex complex::operator -(const complex &c)
{
return complex(real - c.real, imag - c.imag);
}
*/
inline complex complex::operator *(const complex &c)
{
return complex(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
}

inline complex complex::operator /(const complex &c)
{
return complex((real * c.real + imag + c.imag) / (c.real * c.real + c.imag * c.imag),
(imag * c.real - real * c.imag) / (c.real * c.real + c.imag * c.imag));
}

inline void print(const complex &c)
{
    if(c.imag<0)
        cout<<c.real<<c.imag<<'i';
    else
        cout<<c.real<<'+'<<c.imag<<'i';
}

#endif // COMPLEX_H_INCLUDE
