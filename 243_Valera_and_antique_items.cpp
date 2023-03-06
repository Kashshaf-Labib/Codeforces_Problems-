/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    vector<int> vec;
    int n, v;
    cin >> n >> v;
    for (int i = 1; i <= n; i++)
    {
        int k, a = 2147483647;
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            int x;
            cin >> x;
            a = min(a, x);
        }
        if (a < v)
            vec.push_back(i);
    }
    {
        cout << vec.size() << endl;
        for (auto &it : vec)
        {
            cout << it << " ";
        }
    }
    return 0;
}