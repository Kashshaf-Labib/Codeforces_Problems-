#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long m = n;
        long long s;
        s = (n * (n + 1)) / 2;
        long long pow2 = 1;
        while (pow2 <= n)
        {
            pow2 = pow2 * 2;
            s = s - (pow2);
        }
        cout << s << endl;
    }

    return 0;
}