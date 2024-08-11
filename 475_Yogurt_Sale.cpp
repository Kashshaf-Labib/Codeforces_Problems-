/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        if (2 * a <= b)
        {
            cout << n * a << endl;
        }
        else
        {
            cout << (n / 2) * b + (n % 2) * a << endl;
        }

      
    }

    return 0;
}