#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int A , B ,cont=0;
    cin >> A >> B;
    string S;
    cin >> S;
    if (S[A] !=  '-' ||  A + B + 1 != S.length())
    {
        cout << "No"<<endl;
        return 0;
    }
    for (int i = 0; i <S.length(); i++)
    {
        if (S[i] >= 48 && S[i] <= 57 && i != A)
        {
            cont++;
        }
    }
    if (cont == A+B)
        cout << "Yes"<<endl;
    else
        cout<< "No"<<endl ;
    return 0;
}