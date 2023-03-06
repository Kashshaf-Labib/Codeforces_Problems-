/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n, ind1 = 0, ind2 = 0, flag = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] > s[i + 1])
        {
            ind1 = i + 1;
            ind2 = i + 2;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "NO" << endl;
    }
    else if (flag == 1)
    {
        cout << "YES" << endl;
        cout << ind1 << " " << ind2 << endl;
    }

    return 0;
}