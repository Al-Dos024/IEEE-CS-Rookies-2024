#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >>t;
    for (int i = 0; i < t; i++)
    {
        int N[100] , n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> N[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout << N[i] <<" " ;
        }
        for (int i = 0; i < n; i++)
        {
            int maxi = N[i];
            for (int j = i+1; j < n; j++)
            {
                maxi = max(maxi, N[j]);
                    cout << maxi << " ";
            }
        }
        cout << endl;
    }
    return 0;
}