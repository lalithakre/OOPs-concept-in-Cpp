#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    char name[20];
    int age;
    char section;
    void display()
    {
        cout<<"\t\t\t\tStudent details are:\n";
        cout<<"\t\t\t\tName:"<<name;
        cout<<"\n\t\t\t\tAge:"<<age;
        cout<<"\n\t\t\t\tSection:"<<section;
    }
};
int main()
{
    student s;
    cout<<"\t\tEnter student name\n\t\t";
    cin.get(s.name,20);
    cout<<"\n\t\tEnter age:\n\t\t";
    cin>>s.age;
    cout<<"\n\t\tEnter section:\n\t\t";
    cin>>s.section;
    s.display();
    return 0;
}