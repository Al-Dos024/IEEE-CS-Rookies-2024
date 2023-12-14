#include <bits/stdc++.h>
using namespace std;
int cont=0;
void pro(long long num)
{
    cont++;
    if(num==1)
        return;
    if(num%2==0)
        pro(num/2);
    else
        pro(3*num+1);
}
int main()
{
    long long num;
    cin>>num;
    pro(num);
    cout<<cont;
}