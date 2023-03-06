#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t, n;
    cin >> t;
    while (t--)
    {
        int odd = 0;
        cin >> n;
        int arr[2 * n];
        for (int i = 0; i < (2 * n); i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < (2 * n); i++)
        {
            if (arr[i] % 2 != 0)
                odd++;
        }
        if (odd == n)
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }

    return 0;
}