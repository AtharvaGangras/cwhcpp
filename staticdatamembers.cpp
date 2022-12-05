#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;
    static int c2;

    // a static function can be run with class name only
    //  static void getcount(void) //needs to be declared in public
    //  {
    //      cout<<"The count is"<<count<<endl;
    //  }
public:
    void setdata(void)
    {
        cout << "Enter the id of Employee no." << count + 1 << ":";
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The id of this employee is:" << id << " and this is Employee no." << count << endl;
    }

    static void getcount(void)
    {//has access only to other static functions or variables.
        // cout<<id;//not accessible. Throws an error.
        cout << "The count is " << count << endl;
    }
};
int Employee::count; // need to be done for static variables(global declaration)
                     // default value is 0//or the value can be initialized here.
int Employee::c2 = 100; // this is valid

int main()
{
    Employee atharva, nitesh, suraj;

    atharva.setdata();
    atharva.getdata();
    nitesh.setdata();
    nitesh.getdata();
    Employee::getcount();
    suraj.setdata();
    suraj.getdata();
}