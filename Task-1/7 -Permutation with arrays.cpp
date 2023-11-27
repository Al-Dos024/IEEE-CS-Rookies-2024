#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[1000],B[1000], n;
      cin >> n;
      for (int i = 0; i < n; i++)
      {
              cin >> A[i];
      }
      for (int i = 0; i < n; i++)
      {
          cin >>B[i];
      }
      sort(A, A + n);
      sort(B, B + n);
      for (int i = 0; i < n; i++)
      {
          if (A[i] != B[i])
          {
              cout << "no" << endl;
              return 0;
          }       
      }
      cout << "yes" << endl;
      return 0;
}