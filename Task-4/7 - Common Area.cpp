#include <bits/stdc++.h>
using namespace std;

int main(){
    long long testcases;
    cin >> testcases;
    int cont = 1;
    while (cont <= testcases)
    {
        long long numRect;
        cin >> numRect;
        long long x1 ,y1 , x2 , y2 , maxX1 , maxY1 , minX2 ,minY2;
        cin >> x1 >> y1 >> x2 >> y2;
        maxX1 = x1 , maxY1 = y1 , minX2 = x2 , minY2 = y2 ;
        for (int i = 1; i < numRect; i++)
        {
            cin >> x1 >> y1 >> x2 >> y2;
            maxX1 = max(maxX1,x1);
            maxY1 = max(maxY1,y1);
            minX2 = min(minX2,x2);
            minY2 = min(minY2,y2);
        }
        if (minX2 > maxX1 && minY2 > maxY1){
        cout<<"Case #"<<cont<<": "<<(minX2 - maxX1)*(minY2 - maxY1)<<endl;
        }else
        {
            cout<<"Case #"<<cont<<": "<<0<<endl;
        }
        cont++;
    }
    
}