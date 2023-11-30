#include <iostream>
#include<string>
using namespace std;
int main ()
{
    string A;
    cin>>A;
    int a=A.length();
    for(int i =0;i<a;i++)
    {
    char x =A[i];
    if (x >=65 && x <= 90 )//cap
        cout<< (char)(x+32);
    else if (x >=97 && x <= 122 )//small
        cout<<(char)(x-32);
    else if (x==',')
        cout<<" ";
    }
    return 0;
}