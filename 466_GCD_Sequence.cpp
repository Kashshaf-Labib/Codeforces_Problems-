/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isOkay(vector<int> &v)
{
    for (int i = 0; i < v.size() - 2; i++)
    {
        if (__gcd(v[i], v[i + 1]) > __gcd(v[i + 1], v[i + 2]))
        {
            return false;
        }
    }

    return true;
}

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
        int arr[n + 1];

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        int gcdarr[n];

        for (int i = 1; i <= n - 1; i++)
        {
            gcdarr[i] = __gcd(arr[i], arr[i + 1]);
        }

        int currgcd = gcdarr[1], ind1 = -1, ind2 = -1, ind3 = -1;

        for (int i = 1; i <= n - 1; i++)
        {
            if (gcdarr[i] < currgcd)
            {
                currgcd = gcdarr[i];
                ind1 = i;
                ind2 = i + 1;
                ind3 = i - 1;
                break;
            }
            else
            {
                currgcd = gcdarr[i];
            }
        }

        vector<int> v1, v2, v3;

        for (int i = 1; i <= n; i++)
        {
            if (i != ind1)
            {
                v1.push_back(arr[i]);
            }
        }

        for (int i = 1; i <= n; i++)
        {
            if (i != ind2)
            {
                v2.push_back(arr[i]);
            }
        }

        for (int i = 1; i <= n; i++)
        {
            if (i != ind3)
            {
                v3.push_back(arr[i]);
            }
        }

        if (isOkay(v1) or isOkay(v2) or isOkay(v3))
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