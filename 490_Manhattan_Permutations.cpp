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
        ll n, k;
        cin >> n >> k;

        ll f = 1, l = n, maxPossible = 0;

        while (f <= l)
        {
            maxPossible += (l - f) * 2;
            f++, l--;
        }
        //cout << maxPossible << endl;

        if (k > maxPossible or k % 2 == 1)
        {
            cout << "No" << endl;
        }
        else
        {
            if (k == 0)
            {
                cout << "Yes" << endl;
                for (int i = 1; i <= n; i++)
                {
                    cout << i << " ";
                }
                cout << endl;
            }
            else
            {
                cout << "Yes" << endl;
                int arr[n + 1];

                for (int i = 1; i <= n; i++)
                {
                    arr[i] = i;
                }

                int left = arr[1], right = arr[n];

                // cout << v[right] - v[left] << endl;

                while (k > 0)
                {
                    if ((arr[right] - arr[left]) * 2 <= k)
                    {
                        k -= ((arr[right] - arr[left])) * 2;
                        swap(arr[left], arr[right]);
                        left++;
                        right--;
                    }
                    else
                    {
                        right--;
                    }
                }
                for (int i = 1; i <= n; i++)
                {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
        }
    }

    return 0;
}