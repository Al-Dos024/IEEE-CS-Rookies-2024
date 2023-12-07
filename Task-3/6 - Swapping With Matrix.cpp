#include <bits/stdc++.h>
using namespace std;
void swapR(int arr[500][500], int size, int n1, int n2)
{
	for (int i = 0; i < size; i++)
	{
		int Er = arr[n1][i];
		arr[n1][i] = arr[n2][i];
		arr[n2][i] = Er;
	}

}
void swapC(int arr[500][500], int size, int n1, int n2)
{
	for (int i = 0; i < size; i++)
	{
		int Ec = arr[i][n2];
		arr[i][n2] = arr[i][n1];
		arr[i][n1] = Ec;
	}

}
void print(int arr[500][500], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

}
int main()
{
	int n, x, y, A[500][500];
	cin >> n >> x >> y;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> A[i][j];
		}
	}
	x--;
	y--;
	swapR(A,n,x,y);
	swapC(A, n, x, y);
	print(A,n);
}