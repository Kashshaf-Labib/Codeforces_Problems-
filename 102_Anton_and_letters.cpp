#include <bits/stdc++.h>
using namespace std;
void sort(string &s)
{
    sort(s.begin(), s.end());
}
int main()
{
    int c = 0;
    string s;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            s[i] = '*';
        }
    }
    sort(s);
    cout << s << endl;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            if (s[i] != s[i + 1])
                c++;
        }
    }
    cout << c << endl;

    return 0;
}