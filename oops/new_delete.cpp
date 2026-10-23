#include<iostream>
using namespace std;
int main()
{
    int *p;
    p=new int;
    *p=5;

    cout<<"value:"<<*p<<endl;
      delete p;
    
}