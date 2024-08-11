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
        bool flag = true;
        for (int i = 0; i < n - 2; i++)
        {
            if (arr[i] == 0)
            {
                continue;
            }
            if (arr[i] < 0)
            {
                flag = false;
                break;
            }
            int minus = arr[i];
            arr[i] = 0;
            arr[i + 1] = (arr[i + 1] - (2 * minus));
            arr[i + 2] -= minus;
        }

        if (!flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            if(arr[n-1] == 0 && arr[n-2] == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}