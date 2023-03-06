#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int arr[3];
    int d, c1 = 0, c2 = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    cin >> d;
    sort(arr, arr + 3);
    int a = arr[0];
    int b = arr[1];
    int c = arr[2];
    if ((c - b) < d)
    {
        c1 = (d - (c - b));
    }
    if ((b - a) < d)
    {
        c2 = (d - (b - a));
    }
    cout << c1 + c2 << endl;

    return 0;
}