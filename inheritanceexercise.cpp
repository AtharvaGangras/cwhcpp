/*
Create 2 classes:
1.simple calculator - takes input of 2 numbers usi9nga  utility function and performs +,=,*,/ and
                    displays the results using another function.
2.scientific calculator-takes input of 2 numbers using a utility function and perfroms any four scientific operation of your choice 
                    and displays the results using another function.

Create another class Hybrid calculator and inherit it using these 2 classes:
1.what type of Inheritance are you using? mulitple
2.Which mode of inheritance are you using?
3. Create an object of HybridCalculator and display results of simple and scientific calculator.
4.How is code reusability implemented?
                    
*/

#include <iostream>
#include <cmath>
using namespace std;
class simplecalculator
{
    float a;
    float b;
    float sum;
    float product;
    float diff;
    float divide;
    public:
    void getnums(float a,float b)
    {
        this->a = a;
        this->b = b;
        sum = a+b;
        product = a*b;
        diff = a-b;
        divide = a/b;
    }
    void display(void)
    {
        cout<<a<<" + "<<b<<" = "<<sum<<endl;
        cout<<a<<" - "<<b<<" = "<<diff<<endl;
        cout<<a<<" * "<<b<<" = "<<product<<endl;
        cout<<a<<" / "<<b<<" = "<<divide<<endl;
    }
};

class scientificcalculator
{   float a,b;
    float logab,powab;
    public:
    void getnumssc(float a,float b)
    {
        this->a = a;
        this->b = b;
        logab = log(a)/log(b); //logb a)
        powab = pow(a,b);

    }
    void displaysc(void)
    {
        cout<<"log"<<b<<"("<<a<<") = "<<logab<<endl;
        cout<<a<<"^"<<b<<" = "<<powab<<endl;
    }
};
int main()
{
    //test obj of each class then create derived class
}