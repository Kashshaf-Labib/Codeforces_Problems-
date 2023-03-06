/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int odd = 0;
    vector<int> v(n);
    int reduced = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] & 1)
        {
            if (reduced == 0)
            {
                v[i] = v[i] - 1;
                reduced++;
            }
            else if (reduced > 0)
            {
                v[i] = v[i] + 1;
                reduced--;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        v[i] = v[i] / 2;
        cout << v[i] << endl;
    }
    return 0;
}