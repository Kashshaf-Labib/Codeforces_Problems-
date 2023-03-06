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
    int a, p;
    cin >> a >> p;
    int cost = p;
    int total = a * p;
    for (int i = 1; i < n; i++)
    {
        cin >> a >> p;
        if (p < cost)
        {
            cost = p;
        }
        total = total + (a * cost);
    }
    cout << total << endl;

    return 0;
}