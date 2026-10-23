#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"enter value of a:";
    cin>>a;
    cout<<"enter value of b:";
    cin>>b;
    cout<<"before swaping the numbers are:"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"After swaping the variables are:"<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    return 0;
}