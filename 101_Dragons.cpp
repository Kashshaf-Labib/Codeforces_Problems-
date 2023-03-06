#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s, c = 0;
    cin >> s >> n;
    //Pair concept and sorting of paired arrays
    pair<int, int> x[10000];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i].first >> x[i].second;
    }
    sort(x, x + n);
    for (int i = 0; i < n; i++)
    {
        if (s <= x[i].first)
        {
            c++;
            break;
        }
        else if (s > x[i].first)
        {
            s = s + x[i].second;
        }
    }
    if (c > 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}