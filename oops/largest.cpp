#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"Enter the first number:";
    cin>>num1;
    cout<<"enter the second number:";
    cin>>num2;
    cout<<"enter the third number:";
    cin>>num3;

    if(num1>=num2 && num1>=num3)
    {
        cout<<"number 1 is largest.";
    }
    else if(num2>=num1 && num2>=num3)
    {
        cout<<"number 2 is largest.";
    }
    else
    {
        cout<<"number 3 is largest.";
    }
    return 0;

}