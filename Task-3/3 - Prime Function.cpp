#include<iostream>
#include<cmath>
using namespace std;

bool prime(int n)
{
    int NN=sqrt(n);
    int flag =0;
    for(int i=2; i<=NN; i++)
    {
        if(n%i==0)
        {
            flag = 1;
            break;
        }
    }
    return flag;
}
int main()
{
    int z;
    cin>>z;
    while (z--)
    {
        int i;
        cin>>i;
        if(i==1)
        {
            cout<<"NO"<<endl;
            continue ;
        }
        int pr=prime(i) ;
            if(pr==1)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }

}

