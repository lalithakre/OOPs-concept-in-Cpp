#include<bits/stdc++.h>
using namespace std;
class pri
{
    private://we cann't access this modifier outside a class
    string a;
    public://accessable anywhere with the help of object
    void setString(string x)
    {
        a=x;
        cout<<a;
    }
};
int main()
{
    pri p;
    string s;
    getline(cin,s);
    p.setString(s);
}