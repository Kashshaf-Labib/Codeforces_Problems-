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
        ll c = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ind = v[n - 1];
        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] > ind)
            {
                c++;
            }
            else
            {
                ind = v[i];
            }
        }
        cout << c << endl;
    }

    return 0;
}