/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    ll ans = 0;
    ll sqans = 0;
    for (int i = 0; i <= (n / 2) - 1; i++)
    {
        ans += arr[i] + arr[n - i - 1];
        ans *= ans;
        sqans += ans;
        ans = 0;
    }
    cout << sqans << endl;

    return 0;
}