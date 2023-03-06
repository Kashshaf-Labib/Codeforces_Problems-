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
        vector<int> v(n);
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if (v[0] > v[n - 1])
            c++;
        for (int i = 1; i < n; i++)
        {
            if (v[i] > v[i - 1])
                c++;
        }
        if (c == n - 1 || c == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}