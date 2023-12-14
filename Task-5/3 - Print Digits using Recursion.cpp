#include <bits/stdc++.h>
using namespace std;
int in=0;
void digits(string num)
{
    if(in == num.size())
        return;

    cout<<num[in]<<" ";
    in++;
    return digits(num);
}
int main()
{
    int num;
    cin>>num;
    while(num--)
    {
        string n;
        cin>>n;
        digits(n);
        cout<<endl;
        in=0;
    }
}