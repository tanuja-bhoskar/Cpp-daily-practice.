#include<iostream>
#include<string>
using namespace std;
class Person
{
    int age;
    string name;
 public:
     void accept()
     {
        cout<<"enter the age of person:";
        cin>>age;
        cout<<"enter the name of person:";
        cin>>name;
     }
     void display()
     {
        cout<<"age="<<age<<endl;
        cout<<"name="<<name<<endl;
     }
};
int main()
{
    Person p1;
    p1.accept();
    cout<<endl;
    p1.display();

}