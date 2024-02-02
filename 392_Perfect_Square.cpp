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
        int n;
        cin >> n;
        char s[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> s[i][j];
            }
        }

        int count = 0;

        for (int i = 0; i < n / 2; i++)
        {
            for (int j = 0; j < n / 2; j++)
            {
                int arr[4] = {s[i][j], s[j][n - 1 - i], s[n - 1 - i][n - 1 - j], s[n - 1 - j][i]};
                sort(arr, arr + 4);
                int maxx = arr[3];
                count += (maxx - arr[0]) + (maxx - arr[1]) + (maxx - arr[2]) + (maxx - arr[3]);
            }
        }

        cout << count << endl;
    }

    return 0;
}