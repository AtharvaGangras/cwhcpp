/*
derivedclassconstructor(arg1,arg2,arg3): baseclasscons(arg1,arg2),baseclasscons(arg3,arg4)

Special Case of Virtual Base Class

The constructors for virtual base classes are invoked before a non-virtual base class
If there are multiple virtual base classes, they are invoked in the order declared
Any non-virtual base class are then constructed before the derived class constructor is executed

*/
#include <iostream>
using namespace std;

class base1{
    int data1;
    public:
    base1(int i){
        data1 = i;
        cout<<"Base1 class constructor called!"<<endl;
    }
    void printdata(void)
    {
        cout<<"The value of data is:"<<data1<<endl;
    }
};
class base2
{
    int data2;
    public:
    base2(int i){
        data2 = i;
        cout<<"Base2 class constructor called!"<<endl;
    }
    void printdata(void)
    {
        cout<<"The value of data is:"<<data2<<endl;
    }
};
class derived:public base1,public base2
{
     int datad;
     public:
     derived(int i,int j,int k):base2(j),base1(k)
     {
        datad = i;
        cout<<"Derived class constructor called!"<<endl;
     }
     void printdata()
     {
        base1::printdata();
        base2::printdata();
        cout<<"The value of data is"<<datad<<endl;
     }
};
int main()
{   
    derived a(5,7,8);
    a.printdata();
    return 0;
}