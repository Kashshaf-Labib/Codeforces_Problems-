/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
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
        string s;
        cin >> n >> k;
        cin >> s;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                count++;
                i += k - 1;
            }
        }
        cout << count << endl;
    }

    return 0;
}