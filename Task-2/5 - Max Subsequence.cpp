#include <bits/stdc++.h>
using namespace std;
int main()
{
	int k, cont = 0;
	cin >> k;
	string S;
	cin >> S;
	char temp;
	for (int i = 0; i < k; i++)
	{
		if (i==0)
		{
			temp = S[i];
			cont++;
		}
		else
		{
			if (S[i]!=temp)
			{
				cont++;
				temp = S[i];
			}
		}
	}
	cout << cont << endl;
	return 0;
}
