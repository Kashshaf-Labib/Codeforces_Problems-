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
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int l = 0, r = n - 1;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                l = i;
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] == 1)
            {
                r = i;
                break;
            }
        }

        int cnt = 0;

        for (int i = l; i <= r; i++)
        {
            if (arr[i] == 0)
            {
                cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}