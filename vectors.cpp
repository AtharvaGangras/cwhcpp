#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void display(const vector<T> &v)
{
    for (size_t i = 0; i < v.size(); i++) //size returns the size of the vector array.
    {
        cout<<v[i]<<endl;
        // cout<<v.at(i)<<endl;
    }
    
}
int main()
{   //vector declarations and initializations.
    vector<float> vec1;//zero length vector
    //go to cppreference for vector methods cplusplus.com/reference/vector/vector
    vector<char> vec2(4); //4 element character vector
    vector<char> vec3(vec2); //4 element character vector from vec2
    // vec2.push_back('c');//pushes the element to the end of the vector so size increases.
    // vec2.push_back('d');
    // vec2.push_back('a');
    // vec2.push_back('b');
    // vec2[0] = 'z';  //adds element to the start of the vector and deletes the empty space.
    // display(vec2);
    // cout<<vec2.size();
    // cout<<endl;
    // display(vec3); //vec3 is completely different object and not an alias so it retains its image from during its initialization with vec2.
    
    vector<int> vec4(6,3); //6 element vector of 3's i.e. all elements are 3
    display(vec4);

    
    
    
    
    
    
    // int size;
    // cout<<"Size of vector:";
    // cin>>size;
    // for (size_t i = 0; i < size; i++)
    // {   float ele;
    //     cout<<"Element:";
    //     cin>>ele;
    //     vec1.push_back(ele);
    //     cout<<"Element added"<<endl;

    // }
    // display(vec1);
    // // vec1.pop_back(); //removes last element from the vector.
    
    // vector<float>:: iterator iter = vec1.begin(); //iterator points to the beginning of the vector
    // vec1.insert(iter+2,5,53.4); //enters at the given index and pushes all other elements back.
    //                             // 5 - no. of copies.
    // cout<<endl;
    // display(vec1);
    
}