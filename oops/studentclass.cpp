#include<iostream>
using namespace std;
    class Student
{
    int Rollno;
    string student_name;
    string Class;
    

 public:
       void accept()
       {
        cout<<"enter student rollno:";
        cin>>Rollno;
        cout<<"enter student name:";
        cin>>student_name;
        cout<<"enter student class:";
        cin>>Class;
       } 
       void display()
       {
        cout<<"student rollno="<<Rollno<<endl;
        cout<<"student name="<<student_name<<endl;
        cout<<"student class="<<Class<<endl;
       }  
};
int main()
{
    Student s1,s2;
    s1.accept();
    s2.accept();

    cout<<"student details:";
    s1.display();
    s2.display();
    
}