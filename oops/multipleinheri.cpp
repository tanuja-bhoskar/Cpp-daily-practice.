#include<iostream>
using namespace std;
class student
{
protected:
    string name;
    int age;
    int acedemic_marks;
public:
     void acceptstudent()
     {
        cout<<"enter name:";
        cin>>name;
        cout<<"enter age:";
        cin>>age;
        cout<<"enter ace marks:";
        cin>>acedemic_marks;
     }    
};
class sport
{ 
protected:
          int sportmarks;

 public:
        void acceptsport()
         {
            cout<<"enter sport marks:";
            cin>>sportmarks;
         }         
};
class result:public student,public sport
{
 public:
          void display()
          {
            int total=acedemic_marks+sportmarks;
            cout<<"name="<<name<<endl;
            cout<<"age="<<age<<endl;
            cout<<"acedamic marks="<<acedemic_marks<<endl;
            cout<<"sport marks="<<sportmarks<<endl;
            cout<<"total="<<total<<endl;
          }   
};
int main()
{
    result r;
    r.acceptstudent();
    r.acceptsport();
    r. display();
}