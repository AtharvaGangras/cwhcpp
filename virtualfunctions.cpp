#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base=1;
        //by default when a base class pointer is pointing to the object of derived class only
        //the methods and variables of base class can be used and are run.
        //this can be changed by virtual function.
        //in this case even when the pointer is of base class the display() function of derived
        //class is being called as it is a virtual function. 
        virtual void display(){ 
            cout<<"1 Dispalying Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
            int var_derived=2;
            void display(){
                cout<<"2 Dispalying Base class variable var_base "<<var_base<<endl;
                cout<<"2 Dispalying Derived class variable var_derived "<<var_derived<<endl;
            }
};
int main(){
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display();
    return 0;
}