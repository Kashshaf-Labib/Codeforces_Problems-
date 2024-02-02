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
        int n, k;
        cin >> n >> k;
        if (k == n - 1)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
        }
        else if (k == 0)
        {
            for (int i = n; i >= 1; i--)
            {
                cout << i << " ";
            }
        }
        else
        {
            int num = 0;
            cout << 1 << " ";
            num++;
            for (int i = k - 1; i >= 0; i--)
            {
                cout << n - i << " ";
                num++;
            }
            int left = n - num;
            for (int i = n - k, x = 1; x <= left; i--, x++)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }

    return 0;
}