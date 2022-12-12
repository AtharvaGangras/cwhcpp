//file is a pattern of 1's and 0's

#include <iostream>
#include <fstream>
#include <string>
/*
The useful classes for working with files are 
1.fstreambase
2.ifstream -->derived from fstreambase
3.ofstream -->derived from fstreambase

in order to work with files in c++->open it -> two ways
using the constructor
using the member function of the class 
*/
using namespace std;
int main()
{
    // //opening files using constructor and writing to it.
    ofstream out("fileio2.txt");//creates a new file in pwd if does not exist
    out<<"Atharva!";

    //opening files using constructor and reading from it.
    ifstream in("fileio.txt"); //if file does not exist does nothing.
    string a;
    in>>a;//only gets a single word of the file
    //when a file is opened a pointer is maintained to the current character once the character
    //is used the pointer moved fwd, in this case the first word was already read, so only
    //'is great' is being printed.

    getline(in,a);//only goes through once  (pointer)
    getline(in,a);//only goes through once  (pointer)
    in.close();
    out.close();
    
    cout<<a;


}