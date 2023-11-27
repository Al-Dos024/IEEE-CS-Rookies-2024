#include <bits/stdc++.h>
using namespace std;
int main()
{
	int A[10000], B[10000], a, b;
	cin >> a >> b;
	for (int i = 0; i < a; i++)
	{
		cin >> A[i];
	}
	for (int i = 0; i < b; i++)
	{
		cin >> B[i];
	}
	int n = 0;
	int cont = 0;
	for (int i = 0; i < a; i++)
	{
		if (A[i]==B[n])
		{
			cont++;
			n++;
		}
	}
	if (cont == b)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
 
} 
