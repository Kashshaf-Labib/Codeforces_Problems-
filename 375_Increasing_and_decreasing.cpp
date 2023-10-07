/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
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
        int x, y, n;
        cin >> x >> y >> n;
        int a = 1;
        int arr[n + 1];
        arr[1] = x;
        arr[n] = y;
        for (int i = n - 1; i >= 2; i--)
        {
            arr[i] = arr[i + 1] - a;
            a++;
        }

        if (arr[2] - arr[1] > arr[3] - arr[2])
        {
            for (int i = 1; i <= n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}