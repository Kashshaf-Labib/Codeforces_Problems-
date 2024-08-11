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
        ll n, c;
        cin >> n >> c;

        ll arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        arr[0] += c;

        ll maxx = *max_element(arr, arr + n);
        int index = -1;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == maxx)
            {
                index = i;
                break;
            }
        }

        ll freq[n];
        freq[0] = arr[0];

        for (int i = 1; i < n; i++)
        {
            freq[i] = freq[i - 1] + arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (i == index)
            {
                cout << 0 << " ";
            }
            else if (i > index)
            {
                cout << i << " ";
            }
            else if (i < index)
            {
                if (freq[i] >= maxx)
                {
                    cout << i << " ";
                }
                else
                {
                    cout << i + 1 << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}