#include<iostream>
using namespace std;
int main()
{
    double a,b;
    int choice;

    cout<<"Enter the value of a and b:";
    cin>>a>>b;
    cout<<"1.addition";
    cout<<"2.substraction";
    cout<<"3.multiplication";
    cout<<"4.division";
    cout<<endl<<"ENTER THE CHOICE:";
    cin>>choice;

    switch(choice)
    {
        case 1:
             cout<<"addition:"<<a+b<<endl;
             break;
         case 2:
             cout<<"substraction:"<<a-b<<endl;
             break;
         case 3:
             cout<<"multiplication:"<<a*b<<endl;
             break;
         case 4:  
             cout<<"division:"<<a/b<<endl;
             break;
          default:
                cout<<"invalid choice.";   
    }
    return 0;
}