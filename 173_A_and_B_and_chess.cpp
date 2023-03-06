/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    string s;
    int sumw = 0, sumb = 0;

    for (int i = 0; i < 8; i++)
    {
        cin >> s;
        for (int j = 0; j < 8; j++)
        {
            if (s[j] == 'Q')
            {
                sumw = sumw + 9;
            }
            else if (s[j] == 'R')
            {
                sumw = sumw + 5;
            }
            else if (s[j] == 'B')
            {
                sumw = sumw + 3;
            }
            else if (s[j] == 'N')
            {
                sumw = sumw + 3;
            }
            else if (s[j] == 'P')
            {
                sumw = sumw + 1;
            }
            else if (s[j] == 'q')
            {
                sumb = sumb + 9;
            }
            else if (s[j] == 'r')
            {
                sumb = sumb + 5;
            }
            else if (s[j] == 'b')
            {
                sumb = sumb + 3;
            }
            else if (s[j] == 'n')
            {
                sumb = sumb + 3;
            }
            else if (s[j] == 'p')
            {
                sumb = sumb + 1;
            }
        }
    }
    if (sumw > sumb)
        cout << "White" << endl;
    else if (sumw < sumb)
        cout << "Black" << endl;
    else
        cout << "Draw" << endl;

    return 0;
}