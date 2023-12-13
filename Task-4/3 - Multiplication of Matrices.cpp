#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // write 1st table A
    int RA, CA;
    cin >> RA >> CA;

    vector<vector<int>> tableA(RA, vector<int>(CA));
    for (int i = 0; i < RA; i++)
    {
        for (int j = 0; j < CA; j++)
        {
            cin >> tableA[i][j];
        }
    }

    // wirte 2nd table B
    int RB, CB;
    cin >> RB >> CB;

    vector<vector<int>> tableB(RB, vector<int>(CB));
    for (int i = 0; i < RB; i++)
    {
        for (int j = 0; j < CB; j++)
        {
            cin >> tableB[i][j];
        }
    }

    // wirte 3nd table C which is the result
    vector<vector<int>> result(RA, vector<int>(CB, 0));

    for (int i = 0; i < RA; i++)
    {
        for (int j = 0; j < CB; j++)
        {
            for (int k = 0; k < CA; k++)
            {
                result[i][j] += tableA[i][k] * tableB[k][j];
            }
        }
    }

    // The output
    for (int i = 0; i < RA; i++)
    {
        for (int j = 0; j < CB; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}