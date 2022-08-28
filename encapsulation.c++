#include<bits/stdc++.h>
using namespace std;
class reactangle
{
    int length;
    int breadth;
    public:
    void setDimension(int l,int b)
    {
        length=l;
        breadth=b;
    }
    int getArea()
    {
        return length*breadth;
    }
};
int main()
{
    reactangle rect;
    rect.setDimension(4,7);
    cout<<rect.getArea();
}