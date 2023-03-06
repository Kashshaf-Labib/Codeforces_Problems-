#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t, n, x;
    cin >> t;
    while (t--)
    {
        int odd = 0, even = 0, sum = 0, c = 0;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 != 0)
                odd++;
            else
                even++;
        }
        if (n == x)
        {
            for (int i = 0; i < n; i++)
            {
                sum = sum + arr[i];
            }
            if (sum % 2 != 0)
            {
                cout << "Yes" << endl;
            }
            else
                cout << "No" << endl;
        }
        else
        {
            if (odd == 0)
            {
                cout << "No" << endl;
            }
            else
            {
                odd--;
                x--;
                while (x > 0)
                {
                    if (odd >= 2 && x >= 2)
                    {
                        odd = odd - 2;
                        x = x - 2;
                    }
                    else if (even > 0)
                    {
                        even--;
                        x--;
                    }
                }
                if (x > 0)
                    cout << "No" << endl;
                else
                    cout << "Yes" << endl;
            }
        }
    }

    return 0;
}