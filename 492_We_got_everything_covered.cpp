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
        int n, k;
        cin >> n >> k;

        char start = 'a';
        string ans = "";

        for (int i = 1; i <= n * k; i++)
        {
            ans += start;
            start++;
            if (i % k == 0)
            {
                start = 'a';
            }
        }

        cout << ans << endl;
    }

    return 0;
}
