#include <iostream>
using namespace std;
int glo {6};
 void func1()
 {
    cout<<glo<<endl;
 }
int main()
{   int glo{10};
    cout<<glo<<endl;//prints local variable glo.
    func1();
    cout<<::glo<<endl;//prints global variable glo
}
