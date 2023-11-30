#include <bits/stdc++.h>
using namespace std;
int main()
{
	int cont = 0;
	string S,res;
	getline(cin, S);
	for (int i = 0; i < S.size(); i++)
	{
		if (S[i] != 32 && S[i] != '!' && S[i] != '.' && S[i] != '?' && S[i] != ',')
			res += S[i];
		if ((S[i] == 32 || S[i] == '!' || S[i] == '.' || S[i] == '?' || S[i] == ','||i==S.size()-1 ) && res.size() != 0)
		{
			cont++;
			res = "";
		}
	} 
	cout << cont << endl;
	return 0;
}
 