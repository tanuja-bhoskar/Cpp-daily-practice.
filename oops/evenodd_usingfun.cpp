#include<iostream>
using namespace std;
void evenodd(int n)
{
   if(n%2==0)
   {
    cout<<"number is even.";
   }
   else
   cout<<"number is odd.";

}
int main()
{
    int n;
    cout<<"enter n:";
    cin>>n;
    evenodd(n);
}