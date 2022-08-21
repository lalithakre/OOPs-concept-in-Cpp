#include<bits/stdc++.h>
using namespace std;
class room
{
    public:
    double length,breadth,height;
    double calculareArea()
    {
        return length*breadth;//return double value
    }
    double calculateVolume()
    {
        return length*breadth*height;//return double value
    }

};
int main()
{
    room r;
    cout<<"\nEnter Length,Breadth and Height:\n";
    cin>>r.length>>r.breadth>>r.height;
    cout<<r.calculareArea()<<endl;
    cout<<r.calculateVolume();

}