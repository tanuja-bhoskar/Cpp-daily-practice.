#include<iostream>
using namespace std;
int main()
{
    int a,b,i;
    char opt;

    cout<<"enter a=";
    cin>>a;
    cout<<"enter b=";
    cin>>b;
    cout<<"enter operator(+,-,*,/):";
    cin>>opt;

    switch(opt)
    {
        case '+':
             cout<<"addition:"<<a+b<<endl;
             break;
         case '-':
             cout<<"substraction:"<<a-b<<endl;
             break;
         case '*':
             cout<<"multiplication:"<<a*b<<endl;
             break;
         case '/':  
             cout<<"division:"<<a/b<<endl;
             break;
          default:
                cout<<"invalid choice.";  
    }
}