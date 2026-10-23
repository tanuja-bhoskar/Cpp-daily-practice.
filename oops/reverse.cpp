#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
    list<int>l={10,20,30,40,50};
    cout<<"reversed list:";
    l.reverse();
    for(int val:l)
    {
        cout<<val<<" ";
    }

}