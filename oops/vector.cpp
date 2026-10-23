#include <iostream>
#include<vector>
using namespace std;
int main()
{
        vector<int>vec={10,20,30,40};
       /*vec.push_back(4);
        vec.push_back(40);
        vec.push_back(4000);
        vec.push_back(400);*/
         /*vec.pop_back();
       vec.emplace_back(20);
       cout<<"value at 2 position:"<<vec.at(2)<<endl;
        cout<<vec.size()<<endl;
         cout<<vec.capacity()<<endl;
         cout<<"front:"<<vec.front()<<endl;
         cout<<"back:"<<vec.back()<<endl;
         vec.erase(vec.begin()+2);
         vec.erase(vec.begin()+1,vec.begin()+3);*/
         cout<<"vec.begin:"<<*(vec.begin())<<endl;
          cout<<"vec.end:"<<*(vec.end())<<endl;
         for(int x:vec)
         {
            cout<<x<<"  ";
         }

}