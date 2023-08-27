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
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << 1 << endl;
        }
        else if (n == 2)
        {
            cout << 1 << " " << 2 << endl;
        }
        else
        {
            vector<int> v(n, -1);
            v[n / 2] = 1;
            v[0] = 2;
            v[n - 1] = 3;
            int curr = 4;
            for (int i = 0; i < n; i++)
            {
                if (v[i] == -1)
                {
                    v[i] = curr++;
                }
            }
            for (auto x : v)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }

    return 0;
}