#include <iostream>
#include<string>
using namespace std;
int main ()
{
    int c;
    cin >>c;
    for (int o=0; o<c; o++)
    {
     string A;
     cin>>A;
     int con=0;
     int a=A.length();
     for(int i=0;i<a ; i++)
            if (A[i]=='0'&& A[i+1]=='1'&& A[i+2]=='0')
            {
             con++;
            break;
            }
            else if (A[i]=='1'&& A[i+1]=='0'&& A[i+2]=='1')
            {
                con++;
                break;
            }
            if (con==0)
                cout<<"Bad"<<endl;
            else
                cout<<"Good"<<endl;
      }
    return 0;
    }