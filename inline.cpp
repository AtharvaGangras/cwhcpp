#include <iostream>
using namespace std;
inline int multiply(int a,int b)
{   a = 10;
    b = 20;
    return a*b; //for one line function increases speed as complier replaces the function call
                //to the code of the function in main
                //if we make all functions inline it will fill our cache and hang.
                //don't use for recursion,static variables,loops
}
int product(int a,int b)
{
    static int c = 0; //executes only on the first function call.
    c = c+1;  //Next time the function is run the value of c is retained and we get c = c+1= 2
}
int main()
{
    int a = 5,b = 10;
    cout<<multiply(a,b)<<endl;
    // cout<<a<<b<<endl;
}