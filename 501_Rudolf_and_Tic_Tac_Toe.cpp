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
        char str[3][3];

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                char x;
                cin >> x;
                str[i][j] = x;
            }
        }

        bool flag = false;

        char curr = str[0][0];
        if (str[0][1] == curr and str[0][2] == curr and curr!='.')
        {
            cout << curr << endl;
            flag = true;
        }
        else if (str[1][0] == curr and str[2][0] == curr and curr!='.')
        {
            flag = true;
            cout << curr << endl;
        }
        else if (str[1][1] == curr and str[2][2] == curr and curr!='.')
        {
            flag = true;
            cout << curr << endl;
        }

        if (!flag)
        {
            curr = str[0][1];
            if (str[1][1] == curr and str[2][1] == curr and curr!='.')
            {
                flag = true;
                cout << curr << endl;
            }
        }
        if (!flag)
        {
            curr = str[0][2];
            if (str[1][2] == curr and str[2][2] == curr and curr!='.')
            {
                flag = true;
                cout << curr << endl;
            }
            else if (str[1][1] == curr and str[2][0] == curr and curr!='.')
            {
                flag = true;
                cout << curr << endl;
            }
        }
        if (!flag)
        {
            curr = str[1][0];
            if (str[1][1] == curr and str[1][2] == curr and curr!='.')
            {
                flag = true;
                cout << curr << endl;
            }
        }
        if (!flag)
        {
            curr = str[2][0];
            if (str[2][1] == curr and str[2][2] == curr and curr!='.')
            {
                flag = true;
                cout << curr << endl;
            }
        }
        if (!flag)
        {
            cout << "DRAW" << endl;
        }
    }

    return 0;
}