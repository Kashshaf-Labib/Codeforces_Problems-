#include <bits/stdc++.h>
using namespace std;
void khela()
{
    long long n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    long long minn = *min_element(v.begin(), v.end());
    if (minn == v[0])
    {
        cout << "Bob" << endl;
    }
    else
        cout << "Alice" << endl;
    return;
}
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        khela();
    }

    return 0;
}