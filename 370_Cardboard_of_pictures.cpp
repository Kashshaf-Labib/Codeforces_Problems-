/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        double n, c;
        cin >> n >> c;
        double sum = 0;
        double sqsum = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
            sqsum += (x * x);
        }
        double x = 16 * sum * sum;
        double y = 16 * n * (c - sqsum);
        double sqt = sqrtl(x + y);
        double ans = (sqt - (4 * sum)) / (8 * n);
        cout << (long long)round(ans) << endl;
    }

    return 0;
}