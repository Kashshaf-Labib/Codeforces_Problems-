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
        int m = (n * (n - 1)) / 2;

        int arr[m];
        for (int i = 0; i < m; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + m);
        int index = 0;
        int k = n - 1;

        for (int i = 0; i < n - 1; i++)
        {
            int minm = 1e9;
            for (int j = 0; j < k; j++)
            {
                minm = min(arr[index++], minm);
            }
            k--;
            cout << minm << " ";
        }
        cout << 1000000000 << endl;
    }

    return 0;
}