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
        int arr[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        int f = arr[1], fs = -1;
        int l = arr[n], ls = -1;
        if (f == l)
        {
            for (int i = 2; i <= n; i++)
            {
                if (arr[i] != f)
                {
                    fs = i;
                    break;
                }
            }
            for (int i = n; i >= 1; i--)
            {
                if (arr[i] != l)
                {
                    ls = i;
                    break;
                }
            }
            if (fs == -1 and ls == -1)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << ls - fs + 1 << endl;
            }
        }
        else
        {
            int fcount = 0, lcount = 0;
            for (int i = 1; i <= n; i++)
            {
                if (arr[i] == f)
                {
                    fcount++;
                }
                else
                {
                    fs = i;
                    break;
                }
            }
            for (int i = n; i >= 1; i--)
            {
                if (arr[i] == l)
                {
                    lcount++;
                }
                else
                {
                    ls = i;
                    break;
                }
            }
            // cout << f << " " << l << " " << fs << " " << ls << endl;
            if (fs == -1 and ls == -1)
            {
                cout << fs << " " << ls << endl;
                cout << 1 << endl;
            }
            else if (fcount > lcount)
            {
                cout << n - fs + 1 << endl;
            }
            else
            {
                cout << ls << endl;
            }
        }
    }

    return 0;
}