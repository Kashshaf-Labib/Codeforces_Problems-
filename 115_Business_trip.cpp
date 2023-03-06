#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int k, s = 0, c = 0;
    cin >> k;
    int a[12];
    for (int i = 0; i < 12; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 12);
    for (int i = 11; i >= 0; i--)
    {
        if (s >= k)
        {
            break;
        }
        else
        {
            s = s + a[i];
            c++;
        }
    }
    if (s < k)
    {
        cout << "-1";
    }
    else
        cout << c;

    return 0;
}