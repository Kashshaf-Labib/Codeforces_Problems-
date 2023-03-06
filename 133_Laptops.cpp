#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a > b || a < b)
        {
            cout << "Happy Alex";
            return 0;
        }
    }
    cout << "Poor Alex";

    return 0;
}