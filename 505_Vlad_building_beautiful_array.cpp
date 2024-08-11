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
        int arr[n], minOdd = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 1 and arr[i] <= minOdd)
            {
                minOdd = arr[i];
            }
        }

        bool allOkay = true;

        if (arr[0] % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i] % 2 != 0)
                {
                    allOkay = false;
                    break;
                }
            }
        }
        else if (arr[0] % 2 == 1)
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i] % 2 != 1)
                {
                    allOkay = false;
                    break;
                }
            }
        }

        if (allOkay)
        {
            cout << "YES" << endl;
        }
        else if (minOdd == INT_MAX)
        {
            cout << "NO" << endl;
        }
        else
        {
            // try for even
            bool makeEven = true;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] % 2 != 0 and arr[i] - minOdd <= 0)
                {
                    makeEven = false;
                    break;
                }
            }

            // try for odd
            bool makeOdd = true;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] % 2 != 1 and arr[i] - minOdd <= 0)
                {
                    makeOdd = false;
                    break;
                }
            }

            if (makeEven or makeOdd)
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