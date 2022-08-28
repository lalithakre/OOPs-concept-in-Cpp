#include<bits/stdc++.h>
using namespace std;
class point
{
    int x,y;
    public:
    point(int x1,int y1)
    {
        x=x1;
        y=y1;
    }
    point(const point & p2)
    {
        x=p2.x;
        y=p2.y;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
};
int main()
{
    point p1(10,20);
    point p2=p1;
    cout<<p1.getx()<<" "<<p1.gety()<<endl;
    cout<<p2.getx()<<" "<<p2.gety();
}