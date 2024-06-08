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

        ll current = arr[0];

        for (int i = 1; i < n; i++)
        {
            if (arr[i] <= current)
            {
                current = ((current / arr[i]) + 1) * arr[i];
            }
            else
            {
                current = arr[i];
            }
        }
        cout << current << endl;
    }

    return 0;
}