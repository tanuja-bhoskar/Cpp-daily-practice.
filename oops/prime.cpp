#include<iostream>
using namespace std;
int main()
{
    int i,n,count=0;

    cout<<"enter value of n:";
    cin>>n;

    for(i = 1;i <= n;i++)
    {
        if(n%i==0)
        {
            count++;
        } 
    }
    if(count==2)
      cout<<"prime number";
    else
       cout<<"non prime";
      return 0;
}