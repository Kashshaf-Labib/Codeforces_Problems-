/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, k;

bool okay(int y)
{
    int z = n;
    int x = z - y;
    int cnt = 2;
    while (x <= y and x >= 0)
    {
        cnt++;
        z = y;
        y = x;
        x = z - y;
    }
    if (cnt >= k)
    {
        return 1;
    }
    return 0;
}
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int l = n + 2;
        int r = n + 1;
        for (int i = n; i >= 1; i--)
        {
            if (okay(i))
            {
                if (r == n + 1)
                {
                    r = i;
                }
                l = i;
            }
        }
        cout << r - l + 1 << endl;
    }

    return 0;
}