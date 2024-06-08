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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        map<char, int> mp;
        for (char ch = 'a'; ch <= 'z'; ++ch)
        {
            mp[ch] = 0;
        }

        for (int i = 0; i < n; i++)
        {
            int val = arr[i];
            for (auto x : mp)
            {
                if (x.second == val)
                {
                    cout << x.first;
                    mp[x.first]++;
                    break;
                }
            }
        }
        cout << endl;
    }

    return 0;
}