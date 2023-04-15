/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

//Funtion to get longest common substring:

string LCS(string X, string Y, int m, int n)
{
    int maxlen = 0;
    int endingIndex = m;
    int lookup[m + 1][n + 1];
    memset(lookup, 0, sizeof(lookup));

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (X[i - 1] == Y[j - 1])
            {
                lookup[i][j] = lookup[i - 1][j - 1] + 1;
                if (lookup[i][j] > maxlen)
                {
                    maxlen = lookup[i][j];
                    endingIndex = i;
                }
            }
        }
    }
    return X.substr(endingIndex - maxlen, maxlen);
}
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int x = a.length();
        int y = b.length();
        cout << x + y - (LCS(a, b, x, y).length() * 2) << endl;
    }

    return 0;
}