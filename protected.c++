#include<bits/stdc++.h>
using namespace std;
class object
{
    protected:
    int a=2;
};
class ob:public object
{
    public:
    a=45;
    void print()
    {
        cout<<a;
    }
};
int main()
{
    ob ob;
    ob.print();
}