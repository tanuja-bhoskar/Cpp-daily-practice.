#include<iostream>
using namespace std;
int main()
{
   int arr[5];
   int sum=0;
   
   cout<<"enter the 5 elements os arr:";
   for(int i=0;i<5;i++)
   {
    cin>>arr[i];
    sum=sum+arr[i];
   }
   
    cout<<"sum of arr:"<<sum<<endl;


   
}