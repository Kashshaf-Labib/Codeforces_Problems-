#include <iostream>
#include <bits/stdc++.h>
using namespace std;

double distance(int x1, int x2, int y1, int y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int px, py, ax, ay, bx, by;
        cin >> px >> py >> ax >> ay >> bx >> by;

        double ans1 = max(distance(ax, 0, ay, 0), distance(px, ax, py, ay));
        double ans2 = max(distance(bx, 0, by, 0), distance(px, bx, py, by));
        double nonintersecting = distance(ax, bx, ay, by) / 2;
        double oa = distance(ax, 0, ay, 0);
        double ob = distance(bx, 0, by, 0);
        double minoaob = min(oa, ob);
        double pa = distance(px, ax, py, ay);
        double pb = distance(px, bx, py, by);
        double minpapb = min(pa, pb);
        double both = max({minpapb, minoaob, nonintersecting});
        double ans = min({ans1, ans2, both});
        cout << setprecision(11) << ans << endl;
    }
    return 0;
}