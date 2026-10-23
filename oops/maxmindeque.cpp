#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;
int main()
{
    deque<int>d={10,20,30,40,50};
    cout<<"maximum elemnt:"<<*(max_element(d.begin(),d.end()))<<endl;
    cout<<"minimum element:"<<*(min_element(d.begin(),d.end()));
}