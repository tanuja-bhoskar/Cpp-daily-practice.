#include<iostream>
using namespace std;
int main()
{
    int sub1,sub2,sub3;
double avg;
    cout<<"Enter the marks of three subject:"<<endl;
    cout<<"1 sub marks:";
    cin>>sub1;
    cout<<"2 sub marks:";
    cin>>sub2;
    cout<<"3 sub marks:";
    cin>>sub3;
    avg=(sub1+sub2+sub3/3.0);
 
    if(avg >= 90)
    {
        cout<<"A+ grade"<<endl;
    }
    else if(avg >=75)
    {
        cout<<"B grade."<<endl;
    }
    else if(avg >=60)
    {
        cout<<"C grade";
    }
    else if(avg >=50)
    {
        cout<<"C grade";

    }
    else
    {
        cout<<"D grade";
    }
    return 0;
}