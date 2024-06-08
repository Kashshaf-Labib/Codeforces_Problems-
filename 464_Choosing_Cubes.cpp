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
        int n, f, k, favCube;
        cin >> n >> f >> k;

        int arr[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            if (i == f)
            {
                favCube = arr[i];
            }
        }

        //cout << favCube << endl;

        sort(arr + 1, arr + n + 1,greater<int>());

        if (k == n)
        {
            cout << "YES" << endl;
        }
        // else
        // {
        //     if (arr[k + 1] >= favCube and arr[k] >= favCube)
        //     {
        //         cout << "MAYBE" << endl;
        //     }
        //     else if (arr[k + 1] < favCube and arr[k] >= favCube)
        //     {
        //         cout << "YES" << endl;
        //     }
        //     else
        //     {
        //         cout << "NO" << endl;
        //     }
        // }

        else
        {
            bool found = false, found1 = false;

            for (int i = 1; i <= k; i++)
            {
                if (arr[i] == favCube)
                {
                    found = true;
                }
            }
            for (int i = k + 1; i <= n; i++)
            {
                if (arr[i] == favCube)
                {
                    found1 = true;
                }
            }
            //cout << found << " " << found1 << endl;

            if (found and found1)
            {
                cout << "MAYBE" << endl;
            }
            else if (found and !found1)
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