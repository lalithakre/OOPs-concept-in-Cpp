#include<bits/stdc++.h>
using namespace std;
class Employee
{
    public:
    int id;
    string name;
    float salary;
    Employee(int i,string j,float s)
    {
        id=i;
        name=j;
        salary = s;
    }
    void print()
    {
        cout<<id<<endl;
        cout<<name<<endl;
        cout<<salary;
    }
};
int main()
{
    Employee e(1,"lalit",42314);
    e.print();
}