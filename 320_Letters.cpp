/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    ll a, b;
    int n, m;
    cin >> n >> m;
    ll arr[200100];
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        arr[i] = arr[i - 1] + a;
    }
    int j = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> b;
        while (1)
        {
            if (arr[j] < b && arr[j + 1] >= b)
            {
                break;
            }
            else
            {
                j++;
            }
        }
        cout << j + 1 << " " << b - arr[j] << endl;
    }

    return 0;
}