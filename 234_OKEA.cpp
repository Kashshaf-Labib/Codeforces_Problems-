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
        if (k == 1)
        {
            cout << "YES" << endl;
            for (int i = 1; i <= n; i++)
            {
                cout << i << endl;
            }
            continue;
        }
        else if (n % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 1; i <= n * k; i += 2)
            {
                int c = 1;
                while (c <= k)
                {
                    cout << i << " ";
                    c++;
                    i = i + 2;
                }
                cout << endl;
                i -= 2;
            }
            for (int i = 2; i <= n * k; i += 2)
            {
                int c = 1;
                while (c <= k)
                {
                    cout << i << " ";
                    c++;
                    i = i + 2;
                }
                cout << endl;
                i -= 2;
            }
        }
    }

    return 0;
}
