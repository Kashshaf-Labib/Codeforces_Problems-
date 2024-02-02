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
        int arr1[n], arr2[m];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }

        sort(arr1, arr1 + n);
        sort(arr2, arr2 + m, greater<int>());


        int i1 = 0, i2 = n - 1, j1 = 0, j2 = m - 1;
        ll diff = 0;

        while (i1 <= i2)
        {
            if (abs(arr1[i1] - arr2[j1]) > abs(arr1[i2] - arr2[j2]))
            {
                diff += abs(arr1[i1] - arr2[j1]);
                i1++, j1++;
            }
            else
            {
                diff += abs(arr1[i2] - arr2[j2]);
                i2--, j2--;
            }
        }

        cout << diff << endl;
    }

    return 0;
}