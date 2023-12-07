#include<iostream>
#include<cmath>
using namespace std;

long long equ(int n1,int n2)
{
    long long res = 0;
    for(int i=2;i<=n2;i+=2)
        res+=pow(n1,i);
    return res;
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    cout<<equ(n1,n2)<<endl;
}

