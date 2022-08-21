#include<bits/stdc++.h>
using namespace std;
class sum
{
    public:
    int n,sum=0,arr[100];
    int getArray()
    {
        cout<<"\nEnter array elements:\n";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];
        }
        return sum;
    }
};
int main()
{
    sum s;
    cout<<"Enter size of an array:";
    cin>>s.n;
    cout<<s.getArray();
}