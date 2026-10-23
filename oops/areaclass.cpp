#include<iostream>
using namespace std;
class Circle
{
    float r;
public:
       
       void accept()
       {
        cout<<"enter radius:";
        cin>>r;
       }
       void display()
       {
        cout<<"area of circle is:"<<(3.14*r*r)<<endl;
       }
};

int main()
{
Circle c;
c.accept();
cout<<endl;
c.display();
}