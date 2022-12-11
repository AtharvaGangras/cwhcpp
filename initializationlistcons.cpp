#include <iostream>
using namespace std;
/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/
class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(a+j)  //this runs as a is being initialized first
    // Test(int i, int j) : b(i), a(b+j)  //in this b = 0 taken as a is initialized first
    // Test(int i, int j) : a(b+i), b(j)  //in this b = 0 taken as a is initialized first
    Test(int i, int j) : b(j),a(i+b)  //in this b = 0 taken as a is initialized first
    {   //the order of initialization depends on the order of declartion of the variables in 
        //the class.
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main()
{
    Test a(5,3);
    
}