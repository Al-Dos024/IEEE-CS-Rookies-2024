#include <iostream>
#include <vector>
using namespace std;

int knapsack_recursive(int n, int w, const vector<int> &weights, const vector<int> &values)
{
    if (n == 0 || w == 0)
        return 0;

    if (weights[n - 1] > w)
        return knapsack_recursive(n - 1, w, weights, values);

    int in = values[n - 1] + knapsack_recursive(n - 1, w - weights[n - 1], weights, values);
    int ex = knapsack_recursive(n - 1, w, weights, values);
    return max(in, ex);
}

int main()
{
    int N, W;
    cin >> N >> W;

    vector<int> weights(N);
    vector<int> values(N);

    for (int i = 0; i < N; ++i)
        cin >> weights[i] >> values[i];

    cout << knapsack_recursive(N, W, weights, values) << endl;

    return 0;
}
