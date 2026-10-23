#include<iostream>
using namespace std;
    class Rectangle
{
     float length,breadth;
 public:
      void accept()
      {
        cout<<"enter length:";
        cin>>length;
        cout<<"enter breadth:";
        cin>>breadth;
      } 
      void calculate()
      {
        cout<<"area="<<(length*breadth)<<endl;
        cout<<"perimeter="<<2*(length+breadth)<<endl;
      }   
};
int main()
{
    Rectangle r;
    r.accept();
    cout<<endl;
    r.calculate();

}