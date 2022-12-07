#include <iostream>
using namespace std;
class base
{   protected: //inheritable member but not used directly like public member.
    int a;
    private:
    int b;
};


class derived: private base{
    public:
    // void func1()
    // {
    //     cout<<a;
    //     cout<<b; //is not inherited as it is private.
    // }
};

int main()
{
    base b;
    derived d;

    // cout<<b.a;
    // cout<<d.a; //will not work since a is protected in both base as well as derived class.
    // cout<<d.b;

}