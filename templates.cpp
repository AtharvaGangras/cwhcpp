#include <iostream>
using namespace std;

template <class T>
class vector{
    T * arr;
    int size;
    public:
        vector(int m)
        {   size = m;
            arr = new T[size];
        }
        void setvalues()
        {
            cout<<"Enter "<<size<<" values: "<<endl;
            for (size_t i = 0; i < size; i++){
            // {   cout<<"Enter value: ";
                cin>>arr[i];
            }
            
        };
        T dotproduct(vector b)
        {
            T product {};
            if(this->size != b.size)
            {
                cout<<"Cannot compute"<<endl;
                return -1;
            }
            for (size_t i = 0; i < this->size; i++)
            {
                product += this->arr[i] * b.arr[i];
            }
            return product;
            
        }
};
int main()
{  
    vector<float> a(5),b(5);
    a.setvalues();
    b.setvalues();
    cout<<a.dotproduct(b)<<endl;
}