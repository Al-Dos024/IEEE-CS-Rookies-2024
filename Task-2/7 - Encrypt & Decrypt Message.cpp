#include <bits/stdc++.h>
using namespace std;
int main()
{
	int Q;
	cin >> Q;
	string S, O = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789",
		K = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
	cin >> S;
	if (Q == 1)
	{
		for (int i = 0; i < S.size(); i++)
		{
			for (int j = 0; j < O.size(); j++)
			{
				if(S[i] == O[j])
					cout << K[j];
			}
 
		}
	}
	else
	{
		for (int i = 0; i < S.size(); i++)
		{
			for (int j = 0; j < O.size(); j++)
			{
				if (S[i] == K[j])
					cout << O[j];
			}
 
		}
	}
	return 0;
}