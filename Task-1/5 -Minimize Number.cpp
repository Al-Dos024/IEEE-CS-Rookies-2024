#include <iostream>
using namespace std;
int main()
{
    int n;
    int A[200];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int num = 0, Min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        num = 0;
        while (A[i] % 2 == 0)
        {
            A[i]/=2;
            num++;
        }
        Min = min(num, Min);
    }
    cout << Min;
    return 0;
}