#include<iostream>
using namespace std;
class Calculator
{
    double a,b;
 public:
        void accept()
        {
            cout<<"enter the val of a:";
            cin>>a;
            cout<<"enter the value of b:";
            cin>>b;
        }
            void addition()
            {
                cout<<"addition:"<<(a+b)<<endl;
            }
            void substraction()
            {
                cout<<"sub:"<<(a-b)<<endl;
            }
            
            void multiplication()
            {
                cout<<"mul:"<<(a*b)<<endl;
            }
            void division()
            {
                if(b!=0)
                {
                    cout<<"division:"<<(a/b)<<endl; 
                }
                else{
                     cout<<"division by zero is not posible";
                }
               
            }
        
      
};
int main()
{
    Calculator c;
    c.accept();
    c.addition();
    c.substraction();
    c.multiplication();
    c.division();
}