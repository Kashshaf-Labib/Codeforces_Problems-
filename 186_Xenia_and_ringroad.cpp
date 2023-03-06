/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    long long ans = arr[0] - 1;
    for (int i = 0; i <= m - 2; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            ans = ans + n - (arr[i] - arr[i + 1]);
        }
        else if (arr[i] < arr[i + 1])
        {
            ans = ans + arr[i + 1] - arr[i];
        }
    }
    cout << ans << endl;

    return 0;
}