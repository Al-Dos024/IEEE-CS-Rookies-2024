#include <bits/stdc++.h>
using namespace std;

void C (int n,int arr[])
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	int n;
	cin >> n;
	int A[100000],B[100000];
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> B[i];
	}
	C(n, B);
	C(n, A);
	return 0;
}