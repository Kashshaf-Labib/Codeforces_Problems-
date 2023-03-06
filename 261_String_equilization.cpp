/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#include <algorithm>
#define ll long long
using namespace std;
void countdc(string s1, string s2)
{
    set<char> set1;
    set<char> set2;
    for (int i = 0; i < s1.size(); i++)
    {
        set1.insert(s1[i]);
    }
    for (int i = 0; i < s2.size(); i++)
    {
        set2.insert(s2[i]);
    }
    for (auto it1 = set1.begin(); it1 != set1.end(); it1++)
    {
        for (auto it2 = set2.begin(); it2 != set2.end(); it2++)
        {
            if (*it1 == *it2)
            {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
    return;
}
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        countdc(s1, s2);
    }

    return 0;
}