#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n, x, sum = 0, neg, ans;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    neg = sum * (-1);
    if (sum == 0)
    {
        cout << "0" << endl;
    }
    else if (neg >= (-x) && neg <= x)
    {
        cout << "1" << endl;
    }
    else
    {

        if (neg % x == 0)
        {
            ans = abs(neg / x);
        }
        else if (neg % x != 0)
        {
            ans = abs(neg / x) + 1;
        }
        cout << (ans) << endl;
    }

    return 0;
}