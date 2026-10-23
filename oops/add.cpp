#include<iostream>
using namespace std;
    int add(int a,int b)
    {
       int result= a+b ;
       return result;
    }

    int main()
    {
        int a,b,result;
        cout<<"enter the value of a:";
        cin>>a;
        cout<<"enter the value of b:";
        cin>>b;
        result = add(a,b);
        cout<<"addition is:"<<result;
          return 0;
    }