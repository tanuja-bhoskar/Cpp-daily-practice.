#include<iostream>
using namespace std;
int main()
{
    //area of circle (3.14*r*r)
    double r,area;
    const double pi=3.14;
    cout<<"Enter the radius value:";
    cin>>r;
    cout<<"Area os circle is:"<<(area=pi*r*r)<<endl;
    return 0;
    
}