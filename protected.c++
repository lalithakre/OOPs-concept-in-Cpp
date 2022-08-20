#include<bits/stdc++.h>
using namespace std;
class object
{
    protected:
    int a=10;
    public:
    void print()
    {
        cout<<a;
    }
};
int main()
{
    object ob;
    ob.print();
}