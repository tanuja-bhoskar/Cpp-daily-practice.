#include<iostream>
using namespace std;
    class Student
{
    private:
    int Rollno;
    string student_name;
    string Class;
    

 public:
       Student()
       {
         Rollno=101;
         student_name="tanuja";
         Class="BSCIT";
       }
       ~Student()
       {
        cout<<"distructor called";
       }
       void display()
       {
        cout<<"rollno="<<Rollno<<endl;
        cout<<"name="<<student_name<<endl;
        cout<<"class="<<Class<<endl;
       }
    };
    int main()
    {
        Student s;
        s.display();

    }