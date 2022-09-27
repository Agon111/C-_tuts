#include <iostream>
#include <cstring> 
#include <cstdlib>


// for operations like copying concatenation comparison searching etc
// #include <cstdlib> // (includes functions to convert c style string to int float long etc)

using namespace std;

int main(){

    char str[100];
    char str2[200];
    
   //one more important point to note:
   /*
         strlen("string") will not return int data type 
         instead it will return size_t datatype

   */

    //to get input with spaces ("Nishant Rai")
    //(we can use cin.getline(firt_name,50,','))

    cin.getline(str,100,',');
    cin.getline(str2,100,',');

    cout<<"(destination is)"<< str2;
    cout<<"(Source is)"<<str;

    cout<<strlen("Nishant Rai")<<"\n";
    cout<<strcat(str2,str)<<"\n";
    // cout<<strrev(str2)<<"\n";
    // cout<<strlwr(str2)<<"\n";
    // cout<<strupr(str)<<"\n";
    cout<<strcpy(str2,str)<<"\n";


    return 0;
}