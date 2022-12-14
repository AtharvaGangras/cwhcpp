#include <iostream>
#include <algorithm> //explore algorithm library(did not understand this concept fully)
                    //contains the sort method
#include <functional>//has functors
//functors are functions that are wrapped in classes to make them available like object
using namespace std;
 
int main()
{
    int arr[] = {1, 73, 4, 2, 54, 7};
    sort(arr,arr+5);
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }

    sort( arr, arr+6, greater< int >( )); //passed as object to sort in descending.
                                        //did not understand this concept fully.
    cout<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }

}