#include <iostream>
using namespace std;
class student{
    protected:
    int roll_no;
    public:
    void set_number(int a){
        roll_no = a;
    }
    void print_number(void){
        cout<<"Your roll no is "<<roll_no<<endl;
    }
};
class test:virtual public student{
    protected:
    float maths,physics;
    public:
    void set_marks(float m1,float m2){
        maths = m1;
        physics = m2;
    }
    void print_marks(void){
        cout<<"Your Results are here:"<<endl
            <<"Maths: "<<maths<<endl
            <<"Physics:"<<physics<<endl;
    }
};
class sports:public virtual student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score = sc;
    }
    void print_score(void){
        cout<<"Your PT score is "<<score<<endl;
    }
};
class results:public test,public sports{
    private:
    float total;
    public:
    void display(void){
        total = maths +physics +score;
        print_number();
        print_marks();
        print_score();
        cout<<"Your total score is: "<<total<<endl;
    }
};
int main()
{
    results atharva;
    atharva.set_number(4200);
    atharva.set_marks(95.5,52.6);
    atharva.set_score(9);
    atharva.display();
}