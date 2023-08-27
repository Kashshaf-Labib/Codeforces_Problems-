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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int cnt = 0;
        for (int i = 0; i < n;)
        {
            if (v[i] < 0 and i < n)
            {
                while (v[i] <= 0 and i < n)
                {
                    i++;
                }
                cnt++;
            }
            else if (i < n)
            {
                i++;
            }
        }
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] < 0)
            {
                v[i] *= -1;
            }
            sum += v[i];
        }
        cout << sum << " " << cnt << endl;
    } 

    return 0;
}