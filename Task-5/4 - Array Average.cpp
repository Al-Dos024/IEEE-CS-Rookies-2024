#include <bits/stdc++.h>
using namespace std;
double arr[100];
int Size;
double avg(int in,double res)
{
    if(Size==in)
        return res/Size;

    return avg(in+1,res+arr[in]);
}
int main()
{
    cin>>Size;
    for(int i=0; i<Size; i++)
        cin>>arr[i];
    cout<<fixed<<setprecision(6)<<avg(0,0);
}