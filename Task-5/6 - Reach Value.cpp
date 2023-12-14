#include <bits/stdc++.h>
using namespace std;
long long in;
bool RV(long long num)
{
    if(in<num)
        return false;
    else if(in==num)
        return true;
    else
        return RV(num*10)||RV(num*20);

}
int main ()
{
    long long t;
    cin>>t;
    while (t--)
    {
        cin>>in;
        if(RV(1))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}