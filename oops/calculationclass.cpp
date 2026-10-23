#include<iostream>
using namespace std;
class  Calculator
{
    float a,b;
 public:
    void accept()
    {
        cout<<"enter the a:";
        cin>>a;
        cout<<"enter the b:";
        cin>>b;
    } 
    void display()
    {
        cout<<"addition ="<<a+b<<endl;
        cout<<"substraction="<<a-b<<endl;
        cout<<"mul="<<a*b<<endl;
        if(b!=0)
        {
            cout<<"division="<<a/b;
        }
        else 
           cout<<"division not possible";
    }
};
int main()
{
    Calculator c;
    c.accept();
    c.display();
}
