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
    Person p[5];
    cout<<"enter details of 5 persons:\n";
    for(int i =0;i<5;i++)
    {
        cout<<"person"<<i+1<<endl;
        p[i].accept();
    }
    cout<<"\n all person details:\n";
    for(int i =0;i<5;i++)
    {
        p[i].display();
    }
}