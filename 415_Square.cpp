#include <bits/stdc++.h>
#define ll long long
using namespace std;
float distance(int x1, int y1, int x2, int y2)
{

    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
}
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        if (x1 == x2)
        {
            ll arm1 = distance(x1, y1, x2, y2);
            cout << arm1 * arm1 << endl;
        }
        else if (x1 == x3)
        {
            ll arm1 = distance(x1, y1, x3, y3);
            cout << arm1 * arm1 << endl;
        }
        else if (x1 == x4)
        {
            ll arm1 = distance(x1, y1, x4, y4);
            cout << arm1 * arm1 << endl;
        }
    }

    return 0;
}