#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t, n;
    cin >> t;
    while (t--)
    {
        int count = 0;
        cin >> n;
        for (long long i = 1; i <= 9; i++)
        {
            for (long long j = i; j <= n; j = (j * 10) + i)
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}