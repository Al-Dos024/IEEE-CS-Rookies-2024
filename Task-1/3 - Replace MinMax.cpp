#include <iostream>
#include<string>
using namespace std;
int main ()
{
   int n ;
   cin>>n;
   int A[n];
   int Max=INT_MIN;
   int Min=INT_MAX;
   for(int i=0;i<n;i++)
   {
    cin>>A[i];
    Max=max(Max,A[i]);
    Min=min(Min,A[i]);
   }
   int x,y;
   for(int i=0;i<n;i++)
   {
       if(A[i]== Max)
        x=i;
       else if(A[i]==Min)
       y=i;
   }
   int tem=A[x];
   A[x]=A[y];
   A[y]=tem;
   for (int i=0;i<n;i++)
    cout<<A[i]<<" ";
} 
 
