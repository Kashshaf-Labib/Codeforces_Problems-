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
        bool winner = 1;
        int a, b, c;
        cin >> a >> b >> c;
        if (c % 2 == 1)
        {
            winner = 1; // a
        }
        else
        {
            winner = 0; // k
        }

        if (a == b)
        {
            if (winner == 1)
            {
                cout << "First" << endl;
            }
            else
            {
                cout << "Second" << endl;
            }
        }
        else
        {
            if (a > b)
            {
                cout << "First" << endl;
            }
            else
            {
                cout << "Second" << endl;
            }
        }
    }

    return 0;
}