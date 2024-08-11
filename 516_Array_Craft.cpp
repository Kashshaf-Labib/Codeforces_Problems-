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
        int n, x, y;
        cin >> n >> x >> y;
        x--, y--;

        int arr[n];

        int selectArr[2] = {-1, 1};

        int switcher = 0;

        for (int i = 0; i < n; i++)
        {
            if (i > x)
            {
                arr[i] = selectArr[switcher];
                switcher = (switcher + 1) % 2;
            }
            else
            {
                arr[i] = 1;
            }
        }

        switcher = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            if (i < y)
            {
                arr[i] = selectArr[switcher];
                switcher = (switcher + 1) % 2;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}