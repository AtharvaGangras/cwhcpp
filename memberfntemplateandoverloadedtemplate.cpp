#include <iostream>
using namespace std;

template <class T>
class Harry
{
public:
    T data;
    Harry(T a)
    {
        data = a;
    }
    void display();
};
 
template <class T> //writing the member function outside
void Harry<T> :: display(){
    cout<<data;
}

//overloading a function template
void func(int a){
    cout<<"I am first func() "<<a<<endl;
}
 
template<class T>
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;
}

int main()
{
    // Harry<float> h(5.7);
    // cout << h.data << endl;
    // h.display();
    // return 0;
    
    func(4);  //Exact match takes the highest priority
}

