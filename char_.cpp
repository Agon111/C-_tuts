#include <iostream>
#include <cctype> //characters

using namespace std;


int main(){
    
    // Testing characters

    cout<<isalpha('e');
    cout<<isalnum('1');
    cout<<isdigit('1');
    cout<<islower('a');
    cout<<isupper('A');
    cout<<isprint('A'); //(returns true if 'A' is a printable charater)
    cout<<ispunct(',');
    cout<<isspace(' '); //(returns true if " " is passed)

    //converting cases
    tolower('A');
    toupper('c');



    return 0;
}