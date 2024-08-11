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
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        int winCount = 0;

        int scenarios[4][2][2] = {
            {{a1, a2}, {b1, b2}},
            {{a1, a2}, {b2, b1}},
            {{a2, a1}, {b1, b2}},
            {{a2, a1}, {b2, b1}}};

        for (int i = 0; i < 4; ++i)
        {
            int sun = 0, slav = 0;

            if (scenarios[i][0][0] > scenarios[i][1][0])
            {
                ++sun;
            }
            else if (scenarios[i][0][0] < scenarios[i][1][0])
            {
                ++slav;
            }

            if (scenarios[i][0][1] > scenarios[i][1][1])
            {
                ++sun;
            }
            else if (scenarios[i][0][1] < scenarios[i][1][1])
            {
                ++slav;
            }

            if (sun > slav)
            {
                ++winCount;
            }
        }

        cout << winCount << endl;
    }

    return 0;
}