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
    int tk25 = 0, tk50 = 0, tk100 = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 25)
        {
            tk25++;
        }
        else if (x == 50)
        {
            if (tk25 <= 0)
            {
                cout << "NO" << endl;
                return 0;
            }
            else
            {
                tk25--;
                tk50++;
            }
        }
        else if (x == 100)
        {
            if (tk50 > 0 && tk25 > 0)
            {
                tk25--;
                tk50--;
            }
            else if (tk25 >= 3)
            {
                tk25 = tk25 - 3;
            }
            else
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;

    return 0;
}