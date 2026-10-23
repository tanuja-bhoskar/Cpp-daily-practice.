#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    list<int>l={10,20,60,40,50};
    auto it=l.begin();
    advance(it,l.size()/2);
    cout<<"middle element:"<<*it;
}