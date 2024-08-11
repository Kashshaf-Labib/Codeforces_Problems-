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
        int n, c, d;
        cin >> n >> c >> d;

        int arr[n * n];

        for (int i = 0; i < n * n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + (n * n));

        // for (int i = 0; i < n * n; i++)
        // {
        //     cout << arr[i] << " ";
        // }
        // cout << endl;

        int a1 = arr[0];

        int matrix[n][n];

        // matrix[0][0] = a1;

        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                matrix[0][0] = a1;
                for (int j = 1; j < n; j++)
                {
                    matrix[0][j] = matrix[0][j - 1] + d;
                }
            }
            else
            {
                matrix[i][0] = matrix[i - 1][0] + c;
                for (int j = 1; j < n; j++)
                {
                    matrix[i][j] = matrix[i][j - 1] + d;
                }
            }
        }

        // for (int i = 0; i < n * n; i++)
        // {
        //     cout << arr[i] << " ";
        // }
        // cout << endl
        //      << endl;

        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         cout << matrix[i][j] << " ";
        //     }
        //     cout << endl;
        // }

        map<int, int> mp;

        for (int i = 0; i < n * n; i++)
        {
            mp[arr[i]]++;
        }

        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mp.find(matrix[i][j]) == mp.end())
                {
                    flag = false;
                    break;
                }
                else
                {
                    mp[matrix[i][j]]--;
                    if (mp[matrix[i][j]] == 0)
                    {
                        mp.erase(matrix[i][j]);
                    }
                }
            }
        }

        if (flag and mp.size() == 0)
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