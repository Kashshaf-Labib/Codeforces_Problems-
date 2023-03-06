/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    double maxx = 0, m;
    int n, ind = 0;
    cin >> n >> m;
    int v[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (v[i] <= m)
            v[i] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        if (ceil(v[i] / m) >= maxx)
        {
            maxx = ceil(v[i] / m);
            ind = i;
        }
    }
    cout << ind << endl;

    return 0;
}