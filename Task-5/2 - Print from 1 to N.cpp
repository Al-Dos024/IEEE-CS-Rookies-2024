#include <bits/stdc++.h>
using namespace std;
 int i=1;
int num(int n)
{
    if(n==0)
        return 0;
    cout<< i++ <<endl;
        return num(n-1);

}
int main()
{
    int n;
    cin>>n;
    num(n);

}