/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n1, n2, k, m;
    cin >> n1 >> n2 >> k >> m;
    vector<int> v1(n1);
    vector<int> v2(n2);
    for (int i = 0; i < n1; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin >> v2[i];
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end(), greater<int>());
    v1.resize(k);
    v2.resize(m);
    if (v1[k - 1] < v2[m - 1])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}