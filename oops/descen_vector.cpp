#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector <int> v={10,20,30,40,50};
    sort(v.begin(),v.end(),greater<int>());
    cout<<"elements in descending order:";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" "; 
    }
}