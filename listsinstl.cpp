#include <iostream>
#include <list> //bidirectional list.
using namespace std;
//go to cppreference for list methods.

void display(list<int> &lst){
    list<int> :: iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
}
using namespace std;
/*
vector(array): fast access,slow insertion and deletion(middle)
list(linkedlist): slower access,fast insertion and deletion(middle)
*/
int main()
{
    list<int> list1;  //empty list of 0 length
    //insertion
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    // display(list1);

    list<int> list2(3);  //empty list of length 3
    list<int> :: iterator it = list2.begin();
    *it = 45;
    it++;
    *it = 6;
    it++;
    *it = 9;
    it++;
 
    // display(list2);

    // //deletion
    // list1.pop_back();
    // display(list1);
    // list1.pop_front();
    // display(list1);
    // cout<<endl;
    // list1.push_back(9);
    // list1.push_front(9);
    // display(list1);
    // list1.remove(9); //removes all instances of the given value
    // display(list1);

    //sorting
    // display(list1);
    list1.sort();
    
    // display(list1);

    //merging
    // list1.merge(list2);
    // display(list1);

    list2.sort();
    list1.merge(list2); //note - if both lists are sorted the merged list will also be sorted
    display(list1);      //if 1 of the lists is not sorted then the final list will also not be sorted.
    display(list2);//once a list is merged the elements from the second list are removed and it is empty
    cout<<list2.size()<<endl;//0
}