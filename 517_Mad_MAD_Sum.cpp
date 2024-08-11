/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> getVector(vector<ll> v, ll n)
{
    map<ll, ll> mp;

    vector<ll> v2;

    ll mx = 0, curr = 0;

    for (int i = 0; i < n; i++)
    {
        mp[v[i]]++;
        if (mp[v[i]] > (1LL * 1) and v[i] > mx)
        {
            mx = v[i];
        }
        if (mx != 0)
        {
            v2.push_back(mx);
        }
    }

    return v2;
}
ll getSum(vector<ll> v, ll sz)
{
    ll sum = 0, ind = 0;

    for (auto x : v)
    {
        sum += (sz - ind) * x;
        ind++;
    }

    return sum;
}

int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        set<ll> st(v.begin(), v.end());

        if (st.size() == v.size())
        {
            cout << accumulate(v.begin(), v.end(), 0LL) << endl;
        }
        else
        {

            ll sum = accumulate(v.begin(), v.end(), 0LL);
            vector<ll> v2 = getVector(v, n);

            if (v2.size() != 0)
            {

                sum += accumulate(v2.begin(), v2.end(), 0LL);
                vector<ll> v3 = getVector(v2, v2.size());
                if (v3.size() != 0)
                {
                    sum += getSum(v3, v3.size());
                    cout << sum << endl;
                }
                else
                {
                    cout << sum << endl;
                }
            }
            else
            {
                cout << sum << endl;
            }
        }
    }

    return 0;
}