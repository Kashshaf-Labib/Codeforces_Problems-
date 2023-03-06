#include <bits/stdc++.h>
using namespace std;
int find_max(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n, s = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maxx = find_max(a, n);
    for (int i = 0; i < n; i++)
    {
        s = s + (maxx - a[i]);
    }
    cout << s << endl;

    return 0;
}