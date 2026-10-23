#include<iostream>
using namespace std;
void checkprime(int n)
{
    int count=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }    
        if(count==2)
        cout<<"prime number";
        else
        cout<<"non prime number.";
    
}
int main()
{
    int n;
    cout<<"enter the value of n:";
    cin>>n;
   checkprime(n);

}