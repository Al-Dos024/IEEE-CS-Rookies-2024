#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >>t;
    for (int i = 0; i < t; i++)
    {
        int N[100] ,n,cont=0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> N[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (N[j] >= N[j - 1])
                    cont++;
                else
                    break;
            }
 
        }
        cout << cont + n<<endl;
    }
    return 0;
}