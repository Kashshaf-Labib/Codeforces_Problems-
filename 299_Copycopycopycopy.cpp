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
        int n, c = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int>::iterator ip;
        sort(v.begin(), v.end());
        ip = std::unique(v.begin(), v.begin() + n);
        v.resize(std::distance(v.begin(), ip));
        cout << v.size() << endl;
    }

    return 0;
}