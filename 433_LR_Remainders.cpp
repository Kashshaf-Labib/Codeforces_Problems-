/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <iostream>
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
        int n, m;
        cin >> n >> m;
        deque<int> dq;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            dq.push_back(x);
        }
        string s;
        cin >> s;

        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                v.push_back(dq.front());
                dq.pop_front();
            }
            else
            {
                v.push_back(dq.back());
                dq.pop_back();
            }
        }

        reverse(v.begin(), v.end());

        vector<int> ans;

        int mul = 1;
        for (auto x : v)
        {
            mul *= x;
            mul %= m;
            ans.push_back(mul);
        }

        reverse(ans.begin(), ans.end());

        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}