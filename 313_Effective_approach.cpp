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
    vector<int> v(n + 1);
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v[a] = i + 1;
    }
    ll vas = 0, pet = 0;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        vas += v[x];
        pet += n - v[x] + 1;
    }
    cout << vas << " " << pet << endl;
    return 0;
}