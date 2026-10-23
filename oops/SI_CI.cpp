#include<iostream>
using namespace std;
int main()
{
   double p,r,t,SI,CI;
   cout<<"Enter the principle:"<<endl;
   cin>>p;
   cout<<"Enter the rate:"<<endl;
   cin>>r;
   cout<<"enter the time:"<<endl;
   cin>>t;
   cout<<"simple intrest is:"<<(SI=p*r*t/100)<<endl;
   cout<<"Compound intrest is:"<<(CI=p+SI)<<endl;
   return 0;
}