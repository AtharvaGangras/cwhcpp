#include <iostream>
using namespace std;
 
class base1{
    public:
        void greet(){
            cout<<"How are yu?"<<endl;
        }
};
class base2{
    public:
    void greet()
    {
        cout<<"Kaise ho?"<<endl;
    }
};
class derived: public base1,public base2
{
    int a;
    public:
    void greet(){  //derived class greet will override both the inherited greet() from base 1 and base2.
        base1::greet(); //base 1 greet will be called
    }
};
int main()
{   //ambiguity1 
    base1 obj1;
    base2 obj2;
    obj1.greet();
    obj2.greet();
    derived objd;
    objd.greet();
}