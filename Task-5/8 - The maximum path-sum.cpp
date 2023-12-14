#include <bits/stdc++.h>
using namespace std;
int row;
int col;
int arr[11][11];
int MP(int Start,int End)
{
    if(Start==row-1 && End==col-1)
        return arr[Start][End];
    else if(Start == row+1 ||End==col+1)
        return -1000000;
    int Right=MP(Start,End+1);
    int Down =MP(Start+1,End);
    return arr[Start][End]+max(Right,Down);
}
int main ()
{
   cin>>row>>col;
   for(int i =0;i<row;i++)
   {
    for(int j=0;j<col;j++)
    {
    cin>>arr[i][j];
    }
   }
   cout<<MP(0,0);
}