#include<iostream>
using namespace std;
int main()
{
   int age;
   cout<<"enter age:";
   cin>>age;
   if(age>=18)
   {
    cout<<"eligible to vote."<<endl;
   }
   else 
   {
     cout<<"NOT eligible to vote."<<endl;
   }
    return 0;
}