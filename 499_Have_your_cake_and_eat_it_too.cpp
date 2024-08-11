/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> check(ll one[], ll two[], ll three[], ll n, ll sum)
{
    vector<ll> ansInd;
    ll currSum = 0, f1 = -1, f2 = -1, s1 = -1, s2 = -1, t1 = -1, t2 = -1;

    for (ll i = 0; i < n; i++)
    {
        currSum += one[i];
        if (currSum >= sum)
        {
            f1 = 0, f2 = i;
            ansInd.push_back(f1);
            ansInd.push_back(f2);
            break;
        }
    }

    if (f1 != -1 and f2 != -1)
    {
        currSum = 0;
        for (ll i = ansInd.back() + 1; i < n; i++)
        {
            currSum += two[i];
            if (currSum >= sum)
            {
                s1 = ansInd.back() + 1;
                s2 = i;
                ansInd.push_back(s1);
                ansInd.push_back(s2);
                break;
            }
        }
    }
    else
    {
        return ansInd;
    }

    if (s1 != -1 and s2 != -1)
    {
        currSum = 0;
        for (ll i = ansInd.back() + 1; i < n; i++)
        {
            currSum += three[i];
        }
        if (currSum >= sum)
        {
            t1 = ansInd.back() + 1;
            t2 = n - 1;
            ansInd.push_back(t1);
            ansInd.push_back(t2);
        }
    }
    else
    {
        return ansInd;
    }

    return ansInd;
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

        ll a[n], b[n], c[n], sum = 0;

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        for (ll i = 0; i < n; i++)
        {
            cin >> c[i];
        }

        if (sum % 3 == 0)
        {
            sum /= 3;
        }
        else
        {
            sum = (sum / 3) + 1;
        }

        vector<ll> ans1 = check(a, b, c, n, sum);
        vector<ll> ans2 = check(b, a, c, n, sum);
        vector<ll> ans3 = check(c, a, b, n, sum);
        vector<ll> ans4 = check(b, c, a, n, sum);
        vector<ll> ans5 = check(c, b, a, n, sum);
        vector<ll> ans6 = check(a, c, b, n, sum);

        bool found = false;

        if (ans1.size() == 6 and find(ans1.begin(), ans1.end(), -1) == ans1.end())
        {
            found = true;
            cout << ans1[0] + 1 << " " << ans1[1] + 1 << " " << ans1[2] + 1 << " " << ans1[3] + 1 << " " << ans1[4] + 1 << " " << ans1[5] + 1 << endl;
        }

        if (!found)
        {
            if (ans2.size() == 6 and find(ans2.begin(), ans2.end(), -1) == ans2.end())
            {
                found = true;
                cout << ans2[2] + 1 << " " << ans2[3] + 1 << " " << ans2[0] + 1 << " " << ans2[1] + 1 << " " << ans2[4] + 1 << " " << ans2[5] + 1 << endl;
            }
        }
        if (!found)
        {
            if (ans3.size() == 6 and find(ans3.begin(), ans3.end(), -1) == ans3.end())
            {
                found = true;
                cout << ans3[2] + 1 << " " << ans3[3] + 1 << " " << ans3[4] + 1 << " " << ans3[5] + 1 << " " << ans3[0] + 1 << " " << ans3[1] + 1 << endl;
            }
        }
        if (!found)
        {
            if (ans4.size() == 6 and find(ans4.begin(), ans4.end(), -1) == ans4.end())
            {
                found = true;
                cout << ans4[4] + 1 << " " << ans4[5] + 1 << " " << ans4[0] + 1 << " " << ans4[1] + 1 << " " << ans4[2] + 1 << " " << ans4[3] + 1 << endl;
            }
        }
        if (!found)
        {
            if (ans5.size() == 6 and find(ans5.begin(), ans5.end(), -1) == ans5.end())
            {
                found = true;
                cout << ans5[4] + 1 << " " << ans5[5] + 1 << " " << ans5[2] + 1 << " " << ans5[3] + 1 << " " << ans5[0] + 1 << " " << ans5[1] + 1 << endl;
            }
        }
        if (!found)
        {
            if (ans6.size() == 6 and find(ans6.begin(), ans6.end(), -1) == ans6.end())
            {
                found = true;
                cout << ans6[0] + 1 << " " << ans6[1] + 1 << " " << ans6[4] + 1 << " " << ans6[5] + 1 << " " << ans6[2] + 1 << " " << ans6[3] + 1 << endl;
            }
        }
        if (!found)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}