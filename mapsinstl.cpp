#include <iostream>
#include <map>
#include <string>

using namespace std;
// maps store key-value pairs like dictionary.
//map is an associative array.
int main()
{
    map<string,int> marks;
    marks["Atharva"] = 98;
    marks["nitesh"] = 85;
    marks.insert({{"Deepak",44},{"Kunal",54}});

    //pirnting the map
    //creating iterator
    map<string,int> :: iterator iter;
    for(iter = marks.begin();iter!= marks.end();iter++)
    {
        cout<<iter->first<<" "<<iter->second<<endl;
    }
    cout<<"The size is:"<<marks.size()<<endl;
    cout<<"The max size is:"<<marks.max_size()<<endl;
    cout<<"The empty's return value  is:"<<marks.empty()<<endl;

}