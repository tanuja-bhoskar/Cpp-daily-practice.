#include<iostream>
using namespace std;
int main()
{
    double base,height,area;
    cout<<"Enter the height of triangle:";
    cin>>height;
    cout<<"Enter the base of triangle:";
    cin>>base;
    cout<<"Area of triangle is:"<<(area=0.5*base*height);
    return 0;
}