#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n:";
    cin>>n;

    if(n>0)
    {
        cout<<"number is positive"<<endl;
    }
    else if(n < 0)
    {
        cout<<"Number is negative"<<endl;
    }
    else
    {
        cout<<"Number is zero.";
    }
    return 0;
}