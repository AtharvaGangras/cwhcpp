#include <iostream>
using namespace std;
inline int multiply(int a,int b)
{   a = 10;
    b = 20;
    return a*b; //for one line function increases speed as complier replaces the function call
                //to the code of the function in main
}
int main()
{
    int a = 5,b = 10;
    cout<<multiply(a,b)<<endl;
    // cout<<a<<b<<endl;
}