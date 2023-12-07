#include<iostream>
using namespace std;

int print(int x)
{
    cin>>x;
    for(int i =1; i<=x; i++)
    {
        cout<<i;
        if(i!=x)
            cout<<" ";
    }
}
int main ()
{
    int y;
    int pri=print(y);
    return 0;
}
