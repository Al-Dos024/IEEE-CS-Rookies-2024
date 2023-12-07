#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        cout<<"NO"<<endl;
    return 0;
    }
    int index=0;
    int bi[100];
    while (n!=0)
    {
        bi[index]=n%2;
        n/=2;
        index++;
    }
    for(int i=0,z=index-1; i<index,z>=0; i++,z--)
    {
        if(bi[i]!=bi[z])
        {
            cout<<"NO"<<endl;
        return 0;
        }
    }
    cout<<"YES"<<endl;

}

