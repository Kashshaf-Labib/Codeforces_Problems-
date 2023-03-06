/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    ll n, k, count = 0, flag = 0;
    cin >> n >> k;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.')
        {
            count = 0;
        }
        else
        {
            count++;
        }
        if (count >= k)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}