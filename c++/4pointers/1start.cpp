#include<iostream>
using namespace std;

int main()
{
    int x=10;
    int* p;
    p=&x;

    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
    return 0;
}

// 10
// 0x61fe1c
// 0x61fe1c
// 0x61fe10
// 10
