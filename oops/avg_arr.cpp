#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    float avg,sum=0;
    cout<<"enter the elements of arr:";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    avg=sum/5;
    cout<<"avg is:"<<avg<<endl;
}