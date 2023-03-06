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
        string p, h;
        cin >> p >> h;
        if (h.length() < p.length())
        {
            cout << "NO" << endl;
        }
        else
        {
            string check;
            int flag = 0;
            sort(p.begin(), p.end());
            for (int i = 0; i <= h.length() - p.length(); i++)
            {
                check = h.substr(i, p.length());
                sort(check.begin(), check.end());
                if (check == p)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}