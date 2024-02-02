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
        int n1, n2;
        cin >> n1 >> n2;
        string s1, s2;
        cin >> s1 >> s2;
        string temp = s1;
        bool found = false;
        int c = 0;
        for (int i = 0; i <= 6; i++)
        {
            if (temp.find(s2) != string::npos)
            {
                c = i;
                found = true;
                break;
            }
            temp += temp;
        }

        if (found)
        {
            cout << c << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}