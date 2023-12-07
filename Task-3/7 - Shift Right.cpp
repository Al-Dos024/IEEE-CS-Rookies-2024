#include <bits/stdc++.h>
using namespace std;
const int s = 100001;
void p1(int arr[s], int shift, int size)
{
	for (int i = shift; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}
void p2(int arr[s], int shift)
{
	for (int i = 0; i < shift; i++)
	{
		cout << arr[i] << " ";
	}
}
int main()
{
	int n, t;
	cin >> n >> t;
	int A[s];
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	int s = t % n;
	p1(A, n - s, n);
	p2(A, n - s);
}