#include <bits/stdc++.h>
using namespace std;
class time
{
private:
    int hours, minutes, seconds;

public:
    void getTime();
    void display();
} t ;//object creation
void time::getTime()
{
    cout << "Enter hour:";
    cin >> hours;
    cout << "Enter minutes:";
    cin >> minutes;
    cout << "Enter seconds:";
    cin >> seconds;
}
void time::display()
{
    cout<<hours<<":"<<minutes<<":"<<seconds;
}
int main()
{
    t.getTime();
    t.display();
}