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
        int loci = -1;
        string s1, s2, s3;
        char c;
        cin >> s1 >> s2 >> s3;
        bool found = false;
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] == '?')
            {
                found = true;
                c = '1';
                loci = i;
                break;
            }
        }

        if (!found)
        {
            for (int i = 0; i < s2.size(); i++)
            {
                if (s2[i] == '?')
                {
                    found = true;
                    c = '2';
                    loci = i;
                    break;
                }
            }
        }

        if (!found)
        {
            for (int i = 0; i < s3.size(); i++)
            {
                if (s3[i] == '?')
                {
                    found = true;
                    c = '3';
                    loci = i;
                    break;
                }
            }
        }
        string ans = "";
        if (c == '1')
        {
            if (loci == 0)
            {
                ans += s1[1];
                ans += s1[2];

                if (ans == "AB" or ans == "BA")
                {
                    cout << 'C' << endl;
                }
                else if (ans == "BC" or ans == "CB")
                {
                    cout << 'A' << endl;
                }
                else
                {
                    cout << 'B' << endl;
                }
            }
            if (loci == 1)
            {
                ans += s1[0];
                ans += s1[2];

                if (ans == "AB" or ans == "BA")
                {
                    cout << 'C' << endl;
                }
                else if (ans == "BC" or ans == "CB")
                {
                    cout << 'A' << endl;
                }
                else
                {
                    cout << 'B' << endl;
                }
            }
            if (loci == 2)
            {
                ans += s1[0];
                ans += s1[1];

                if (ans == "AB" or ans == "BA")
                {
                    cout << 'C' << endl;
                }
                else if (ans == "BC" or ans == "CB")
                {
                    cout << 'A' << endl;
                }
                else
                {
                    cout << 'B' << endl;
                }
            }
        }
        else if (c == '2')
        {
            if (loci == 0)
            {
                ans += s2[1];
                ans += s2[2];

                if (ans == "AB" or ans == "BA")
                {
                    cout << 'C' << endl;
                }
                else if (ans == "BC" or ans == "CB")
                {
                    cout << 'A' << endl;
                }
                else
                {
                    cout << 'B' << endl;
                }
            }
            if (loci == 1)
            {
                ans += s2[0];
                ans += s2[2];

                if (ans == "AB" or ans == "BA")
                {
                    cout << 'C' << endl;
                }
                else if (ans == "BC" or ans == "CB")
                {
                    cout << 'A' << endl;
                }
                else
                {
                    cout << 'B' << endl;
                }
            }
            if (loci == 2)
            {
                ans += s2[0];
                ans += s2[1];

                if (ans == "AB" or ans == "BA")
                {
                    cout << 'C' << endl;
                }
                else if (ans == "BC" or ans == "CB")
                {
                    cout << 'A' << endl;
                }
                else
                {
                    cout << 'B' << endl;
                }
            }
        }
        else if (c == '3')
        {
            if (loci == 0)
            {
                ans += s3[1];
                ans += s3[2];

                if (ans == "AB" or ans == "BA")
                {
                    cout << 'C' << endl;
                }
                else if (ans == "BC" or ans == "CB")
                {
                    cout << 'A' << endl;
                }
                else
                {
                    cout << 'B' << endl;
                }
            }
            if (loci == 1)
            {
                ans += s3[0];
                ans += s3[2];

                if (ans == "AB" or ans == "BA")
                {
                    cout << 'C' << endl;
                }
                else if (ans == "BC" or ans == "CB")
                {
                    cout << 'A' << endl;
                }
                else
                {
                    cout << 'B' << endl;
                }
            }
            if (loci == 2)
            {
                ans += s3[0];
                ans += s3[1];

                if (ans == "AB" or ans == "BA")
                {
                    cout << 'C' << endl;
                }
                else if (ans == "BC" or ans == "CB")
                {
                    cout << 'A' << endl;
                }
                else
                {
                    cout << 'B' << endl;
                }
            }
        }

        // cout << c << " " << loci << endl;
    }

    return 0;
}