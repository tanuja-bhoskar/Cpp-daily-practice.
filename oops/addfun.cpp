#include<iostream>
using namespace std;
void add(int a,int b)
{
    cout<<a+b<<endl;
}
int main()
{
    int a;
    int b;
    cout<<"enter a value:";
    cin>>a;
    cout<<"enter b value:";
    cin>>b;
    add(a,b);
}