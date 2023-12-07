#include <bits/stdc++.h>
using namespace std;
int contDiv(int num)
{
	int m = num / 2;
	int counter = 0;
	for (int j = 1; j <= m; j++)
	{
		if (num % j == 0)
			counter++;
	}
	return counter;
}
int prime(int number, int arr[])
{
	int contp = 0;
	for (int i = 0; i < number; i++)
	{
		int m = arr[i];
		int f = 0;
		for (int j = 2; j*j <= m; j++)
		{
			if (arr[i] % j == 0)
			{
			f = 1;
			break;
			}
		}
		if (f == 0 && arr[i] != 1)
			contp++;
	}
	return contp;
}
bool palindrome(int number)
{
	int temp = number, sum = 0, p;
	while (number > 0)
	{
		p = number % 10;
		sum = (sum * 10) + p;
		number /= 10;
	}
	if (temp == sum)
		return true;
	else
		return false;

}

int main()
{
	int n,A[101];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> A[i];

	int contprime = 0,contPalindrome=0;
	sort(A, A+n);

	cout << "The maximum number : " << A[n - 1]<<endl;
	cout << "The minimum number : " << A[0]<<endl;
	for (int i = 0; i < n; i++)
	{
		if (palindrome(A[i]))
			contPalindrome++;
	}
	cout << "The number of prime numbers : " << prime(n, A) << endl;;
	cout << "The number of palindrome numbers : " << contPalindrome<<endl;
	int c, Max, index;
	for (int i = 0; i < n; i++)
	{
		c = contDiv(A[i]);
		if (i==0)
		{
			Max = c;
			index = i;
		}
		else
		{
			if (c >= Max)
			{
				Max = c;
				index = i;
			}
		}
	}
	cout << "The number that has the maximum number of divisors : " << A[index] << endl;
	return 0;
}
