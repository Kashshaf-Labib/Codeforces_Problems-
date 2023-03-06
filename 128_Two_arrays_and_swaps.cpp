#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, s = 0;
        cin >> n >> k;
        vector<int> a1;
        vector<int> a2;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a1.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a2.push_back(x);
        }
        sort(a1.begin(), a1.end());
        sort(a2.begin(), a2.end(), greater<int>());
        for (int i = 0, j = 0; i < k; i++)
        {
            if (a2[i] > a1[i])
                swap(a1[i], a2[i]);
        }
        for (int i = 0; i < n; i++)
        {
            s = s + a1[i];
        }
        cout << s << endl;
    }

    return 0;
}