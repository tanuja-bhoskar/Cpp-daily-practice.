#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
    list<int>l={10,20,30,40,50};
    auto it=l.begin();
    advance(it,l.size()/2);
    cout<<"middle element:"<<* it;
}
