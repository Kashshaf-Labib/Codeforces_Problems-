/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v(5);
    for (int i; i < 5; i++)
    {
        cin >> v[i];
    }
    ll x = 0;
    x = accumulate(v.begin(), v.end(), x);
    if (x % 5 != 0 || x == 0)
    {
        cout << "-1";
        return 0;
    }
    cout << (x / 5) << endl;

    return 0;
}