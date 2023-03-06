#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int a[q];
    for (int i = 0; i < q; i++)
    {
        cin >> a[i];
    }
    sort(a, a + q);
    int min = a[n - 1] - a[0];
    for (int i = 0; i < (q - n + 1); i++)
    {
        if (a[i + n - 1] - a[i] < min)
            min = a[i + n - 1] - a[i];
    }
    cout << min << endl;

    return 0;
}