#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int allign;
    string s1 = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string s2;
    char c;
    cin >> c;
    cin >> s2;
    if (c == 'R')
        allign = -1;
    else
        allign = 1;
    for (int i = 0; i < s2.length(); i++)
    {
        for (int j = 0; j < s1.length(); j++)
        {
            if (s2[i] == s1[j])
            {
                s2[i] = s1[j + allign];
                break;
            }
        }
    }
    cout << s2 << endl;
    return 0;
}