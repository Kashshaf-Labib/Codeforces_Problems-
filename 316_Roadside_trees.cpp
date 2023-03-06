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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll sum = n + v[0];
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] == v[i + 1])
        {
            sum += 1;
        }
        else if (v[i] < v[i + 1])
        {
            sum += v[i + 1] - v[i] + 1;
        }
        else if (v[i] > v[i + 1])
        {
            sum += v[i] - v[i + 1] + 1;
        }
    }
    cout << sum << endl;

    return 0;
}