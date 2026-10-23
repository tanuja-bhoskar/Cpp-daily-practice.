#include<iostream>
#include<string>
using namespace std;
class employee
{
     string name;
     int id;
     float salary;
 public:
        void accept()
        {
            cout<<"enter name:";
            cin>>name;
            cout<<"enter id:";
            cin>>id;
            cout<<"enter salary:";
            cin>>salary;
        }
           void display()
           {
             cout<<"name="<<name<<endl;
             cout<<"id="<<id<<endl;
             cout<<"salary:"<<salary<<endl;
           }        
};
int main()
{
    employee e;
    e.accept();
    e.display();

}