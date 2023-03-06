/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    for (auto &x : s)
    {
        x = tolower(x);
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i')
        {
            s.erase(i, 1);
            i--;
        }
    }
    if (s.length() != 0)
    {

        for (int i = 0; i < s.length(); i++)
        {
            cout << "." << s[i];
        }
    }
    else
        cout << "" << endl;
    return 0;
}