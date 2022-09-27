#include <iostream>
#include <cctype>

using namespace std;


int main(){
    
    // Testing characters

    cout<<isalpha('e');
    cout<<isalnum('1');
    cout<<isdigit('1');
    cout<<islower('a');
    cout<<isupper('A');
    cout<<isprint('A'); //(returns true if 'A' is a printable charater)
     

    return 0;
}