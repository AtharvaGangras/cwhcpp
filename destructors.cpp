#include<iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value 
int count=0;

class num{
    public:
        int n {};
        num(int n){
            count++;
            this->n = n;
            cout<<"This is the time when constructor is called for object "<<n<<"number"<<count<<endl;
            cout<<"This is the time when constructor is called for object "<<n<<"number"<<count<<endl;
        }

        ~num(){
             cout<<"This is the time when destructor is called for object "<<n<<"number"<<count<<endl;
            count--;
        }
};
int main(){
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1(1);
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2(2), n3(3);
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}

