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
        int x, y;
        cin >> x >> y;

        int one = 0, two = 0;

        if (y % 2 == 0)
        {
            two = y / 2;
            one = two * 7;
            if (two != 0)
            {
                if (x <= one)
                {
                    cout << two << endl;
                }
                else
                {
                    int extra = x - one;
                    if (extra % 15 == 0)
                    {
                        cout << two + (extra / 15) << endl;
                    }
                    else
                    {
                        cout << two + ((extra / 15) + 1) << endl;
                    }
                }
            }
            else if (two == 0)
            {
                if (x % 15 == 0)
                {
                    cout << x / 15 << endl;
                }
                else
                {
                    cout << (x / 15) + 1 << endl;
                }
            }
        }
        else if (y % 2 != 0)
        {
            two = (y / 2) + 1;
            one = ((y / 2) * 7) + 11;
            if (two != 0)
            {
                if (x <= one)
                {
                    cout << two << endl;
                }
                else
                {
                    int extra = x - one;
                    if (extra % 15 == 0)
                    {
                        cout << two + (extra / 15) << endl;
                    }
                    else
                    {
                        cout << two + ((extra / 15) + 1) << endl;
                    }
                }
            }
            else if (two == 0)
            {
                if (x % 15 == 0)
                {
                    cout << x / 15 << endl;
                }
                else
                {
                    cout << (x / 15) + 1 << endl;
                }
            }
        }
    }
    return 0;
}