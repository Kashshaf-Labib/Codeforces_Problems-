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
        int n, k;
        cin >> n >> k;
        int arr[n + 1];

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        sort(arr + 1, arr + n + 1);

        bool okay = true;

        vector<int> problemInd;

        problemInd.push_back(0);

        for (int i = 1; i <= n - 1; i++)
        {
            if (arr[i + 1] - arr[i] > k)
            {
                problemInd.push_back(i + 1);
                okay = false;
            }
        }

        problemInd.push_back(n + 1);

        if (okay)
        {
            cout << 0 << endl;
            continue;
        }

        int maxx = -1;

        for (int i = 0; i < problemInd.size() - 1; i++)
        {
            int temp = problemInd[i + 1] - problemInd[i];
            if (i == 0)
            {
                temp -= 1;
            }

            maxx = max(maxx, temp);
        }

        cout << n - maxx << endl;
    }

    return 0;
}