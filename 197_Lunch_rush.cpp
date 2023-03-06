/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    long long n, k, maxx = -1000000001;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        long long f, t, joy = 0;
        cin >> f >> t;
        if (k < t)
        {
            joy = f - (t - k);
        }
        else
            joy = f;

        maxx = max(joy, maxx);
    }
    cout << maxx << endl;

    return 0;
}