#include<bits/stdc++.h>
using namespace std;
class student
{
    private:
    char name[20],branch[20];
    int sem;
    char enrollNom[20];
    public:
    void getInput();
    void displayDetails();
};
void student :: getInput()
{
    cout<<"\nEnter name:\n";
    cin>>name;                  //Enter without space given
    cout<<"\nEnter branch:\n";
    cin>>branch;                //Enter without space given
    cout<<"\nEnter semester:\n";
    cin>>sem;                   //Enter without space given
    cout<<"\nEnter enrollment number:\n";
    cin>>enrollNom;             //Enter without space given
}
void student:: displayDetails()
{
    cout<<"Name:"<<name;
    cout<<"\nBranch:"<<branch;
    cout<<"\nSemester:"<<sem;
    cout<<"\nEnrollment number:"<<enrollNom;
}
int main()
{
    student s;
    s.getInput();
    s.displayDetails();
    return 0;
}