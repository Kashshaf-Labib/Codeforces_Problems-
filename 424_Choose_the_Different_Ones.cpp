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
        int n, m, k;
        cin >> n >> m >> k;
        int c1 = k / 2, c2 = k / 2;
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x <= k)
            {
                mp[x] = 1;
            }
        }

        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            if (x <= k)
            {
                if (mp[x] == 1 or mp[x]==100)
                {
                    mp[x] = 100;
                }
                else
                {
                    mp[x] = 2;
                }
            }
        }
        bool flag = true;
        // for(auto x:mp)
        // {
        //     cout<<x.first<<" "<<x.second<<endl;
        // }
        for(int i=1;i<=k;i++)
        {
            if(mp.find(i)==mp.end())
            {
                flag=false;
                break;
            }
            if(mp[i]==1)
            {
                c1--;
            }
            if(mp[i]==2)
            {
                c2--;
            }
        }
        //cout<<c1<<" "<<c2<<endl;

        if (c1 >= 0 and c2 >= 0 and flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}