#include<iostream>
#include<string>
using namespace std;
class Person
{
protected:
    string name;
    int rollno;
};
class student:public Person
{
    int marks;
public:
       void accept()
       {
        cout<<"enter name:";
        cin>>name;
        cout<<"enter rollno:";
        cin>>rollno;
        cout<<"enter marks:";
        cin>>marks;
       }  
       void display()
       {
        cout<<"Name:"<<name<<endl;
        cout<<"rollno:"<<rollno<<endl;
        cout<<"marks:"<<marks<<endl;
       }  
};
int main()
{
    student s;
    s.accept();
    s.display();
}