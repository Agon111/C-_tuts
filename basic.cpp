#include <iostream>
#include <climits>

extern int x;

using namespace std;

int main(){
    //g++ -Wall -std=c++14 basic.cpp -o basic.exe;
    //compiler warnings for uninitialized variables;
    int miles_driven;
    cout<<"Hello World!"<<miles_driven<<endl;
    //compilet warnings for unused variabes;
    int age;
    // cout<<x; (This is will give linker error)
    cerr<<"This is an exception"<<endl;
    char ch;
    char16_t ch2;
    char32_t ch3;
    wchar_t ch4;

    int x;
    cout<<sizeof x;
    return 0;
}
