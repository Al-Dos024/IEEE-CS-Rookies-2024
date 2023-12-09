#include <bits/stdc++.h>
using namespace std;
long long gcd(long long A, long long B)
{
	return (B == 0 ? A : gcd(B, A % B));
}
long long lcm(long long A, long long B)
{
	return A / gcd(A, B) * B;
}

int main()
{
	long long a,b;
	cin >> a>>b;
	cout << gcd(a,b) << " ";
	cout<<lcm(a, b);
}
