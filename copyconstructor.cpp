#include <iostream>
using namespace std;
class number{
    int a;
    public:
        number(){}
        number(int num){
            a = num;
        }
        // number(number &obj) //copy constructor
        // {
        //     cout<<"Copy constructor called"<<endl;
        //     a = obj.a; //copies the data
        // } //compiler allocates a default copy constructor to all classes.
        void display(){
            
            cout<<"The number for this object is "<<a<<endl;
            cout<<endl;
        }
};
int main()
{
    number x,y,z(45),z2;
    // x.display();
    // y.display();
    // z.display();
    number z1(z); //copied
    z1.display();
    z2 = z; // Copy constructor not called
    z2.display();
    
    number z3 = z; // Copy constructor invoked , explicitly called 
    z3.display();

    //z1 should exactly resemble z
}
//when no copy constructor is found , compiler supplies its own copy constructor.