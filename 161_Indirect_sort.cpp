#include <bits/stdc++.h>
using namespace std;
void ajkeamarmonnbhalonei()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
    {
        cin >> x;
    }
    if (v[0] == *min_element(v.begin(), v.end()))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ajkeamarmonnbhalonei();
    }

    return 0;
}