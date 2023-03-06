#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n, c1, c2, c = 0, l0 = 0, l1 = 0, r0 = 0, r1 = 0;
    cin >> n;
    int arr1[n], arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i] >> arr2[i];
        if (arr1[i] == 0)
            l0++;
        else
            l1++;
        if (arr2[i] == 0)
            r0++;
        else
            r1++;
    }
    if (l0 > l1)
        c = c + l1;
    else
        c = c + l0;
    if (r0 > r1)
        c = c + r1;
    else
        c = c + r0;
    cout << c << endl;
    return 0;
}