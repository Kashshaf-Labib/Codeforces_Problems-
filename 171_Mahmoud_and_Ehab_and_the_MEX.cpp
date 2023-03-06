#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n, x;
    int arr[101] = {0};
    cin >> n >> x;
    while (n--)
    {
        int a;
        cin >> a;
        arr[a] = 1;
    }
    int ans = arr[x];
    for (int i = 0; i < x; i++)
    {
        ans = ans + (!arr[i]);
    }
    cout << ans << endl;

    return 0;
}