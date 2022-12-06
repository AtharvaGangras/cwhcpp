#include <iostream>
using namespace std;
// forward declaration
class Complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    Complex add(Complex o1, Complex o2);
};

class Complex
{
    int a, b;
    //individually declaring functions as friends
    // friend Complex calculator::add(Complex, Complex);
    
    //aliter: declaring the entire calculator class as friend
    friend class calculator;


public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    // Below line means that non member - sumComplex funtion is allowed to do anything with my private parts (members)
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
Complex calculator::add(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber(o1.a + o2.a, o1.b + o2.b);
    return o3;
}
int main()
{
    Complex c1, c2, sum;
    calculator calc;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = calc.add(c1, c2);
    sum.printNumber();
    return 0;
}