#include <iostream>
using namespace std;

int main()
{
    long long A, B, K;
    cin >> A >> B >> K;
    if (K > 1000000)
    {
        long long A1 = A - K;
        long long K1 = K - A;
        long long B1 = B;
        if (K1 > 0)
        {
            B1 = B - K1;
        }
        if (A1 < 0)
        {
            A1 = 0;
        }
        if (B1 < 0)
        {
            B1 = 0;
        }
        cout << A1 << " " << B1 << endl;
    }

    if (K <= 1000000)
    {
        for (long long i = 0; i < K; i++)
        {
            if (A > 0)
            {
                A--;
            }
            else if (A == 0 && B > 0)
            {
                B--;
            }
            else if (A == 0 && B == 0)
            {
                break;
            }
        }
        cout << A << " " << B << endl;
    }
}