#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int a;
    int b;
    int c;
    int large;
    cout<<"Enter a , b ,c value:";
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b && a>c)
    {
        large=a;
        cout<<"The larger number is:"<<large;
    }
    else if(b>c && b>a)
    {
        large=b;
        cout<<"The larger number is:"<<large;
    }
    else
    {
        large=c;
        cout<<"The larger number is:"<<large;
    }


    return 0;
}