#include<iostream>
using namespace std;
class addition
{
    public:
           int add(int a,int b)
           {
            return (a+b);
           }
           int add(int a, int b ,int c)
           { 
            return (a*b*c);
        }
};
int main()
{
addition a;
a.add(10,20);
a.add(10,20,30);
}