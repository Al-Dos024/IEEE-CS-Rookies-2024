//k
#include <iostream>
#include<bits/stdc++.h>
#include <cmath>
using namespace std;
long long fact(long long idx)
{
    long long cont = 1;
    long long res = 1;
    while(cont<=idx)
    {
        res*=cont;
        cont ++;
    }
    return res;
}

int main()
{
    long long A,B;
    cin>>A>>B;
    cout<<fact(A)/(fact(A-B)*fact(B))<<" ";
    cout<<fact(A)/(fact(A-B));
    return 0;
}
