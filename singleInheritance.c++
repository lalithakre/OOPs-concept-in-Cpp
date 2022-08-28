#include<bits/stdc++.h>
using namespace std;
class getValue
{
    protected:
    int firstValue,secondValue;
    public:
    void get()
    {
        cout<<"Enter firstValue:\n";
        cin>>firstValue;
        cout<<"\nEnter secondValue:"<<endl;
        cin>>secondValue;
    }
};
class display : public getValue
{
    public:
    void dis()
    {
        cout<<"First value is:"<<firstValue<<endl;
        cout<<"Second value is:"<<secondValue;
    }
}d;
int main()
{
    d.get();
    d.dis();
}