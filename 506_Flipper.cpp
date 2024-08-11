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
        if (n == 1)
        {
            cout << arr[0] << endl;
            continue;
        }
        int leftInd = -1, rightInd = -1, midInd = -1;

        if (arr[0] != n)
        {

            for (int i = 1; i < n; i++)
            {
                if (arr[i] == n)
                {
                    midInd = i - 1;
                    leftInd = i - 2;
                    rightInd = i;
                    break;
                }
            }

            for (int i = rightInd; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << arr[midInd] << " ";
            if (leftInd >= 0)
            {
                vector<int> v;
                for (int i = 0; i <= leftInd; i++)
                {
                    v.push_back(arr[i]);
                }
                sort(v.begin(), v.end(), greater<int>());
                for (auto x : v)
                {
                    cout << x << " ";
                }
            }

            cout << endl;
        }
        else
        {
            //cout << n - 1 << " ";
            for (int i = 1; i < n; i++)
            {
                if (arr[i] == n - 1)
                {
                    midInd = i - 1;
                    leftInd = i - 2;
                    rightInd = i;
                    break;
                }
            }
            for (int i = rightInd; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << arr[midInd] << " ";
            if (leftInd >= 0)
            {
                for (int i = 0; i <= leftInd; i++)
                {
                    cout << arr[i] << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}