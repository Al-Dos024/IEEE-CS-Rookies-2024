#include <bits/stdc++.h>
using namespace std;
int main ()
{
    string A;
    cin>>A;
    string NewA = "hello";
    int a=A.length(),na=NewA.length();
    int p=0,q=0;
    while (true)
    {
        if (p==a || q==na)
            break;
        if (A[p]==NewA[q])
            q++;
        p++;
    }
 
    if (q==5)
        cout<<"YES"<<endl;
    else
         cout<<"NO"<<endl;
 
    return 0;
}