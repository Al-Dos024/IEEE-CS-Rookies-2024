#include <bits/stdc++.h>
using namespace std;
int m;
long long pro(long long num)
{
    if(num==1)
        return 0;
    else if(num == 2)
        return 1;
    else
        return pro(num-1)+pro(num-2);

}
int main()
{
    long long num;
    cin>>num;
    cout<<pro(num);
}