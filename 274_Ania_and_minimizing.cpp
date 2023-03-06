/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    ll n, k;
    string primstr;
    cin >> n >> k >> primstr;
    if (primstr.length() == 1 && k > 0)
    {
        cout << 0 << endl;
        return 0;
    }
    else if (primstr.length() > 1 && k > 0)
    {
        ll c = 0;
        string str2 = primstr;
        for (int i = 0; i < primstr.length(); i++)
        {
            if (i == 0)
            {
                if (primstr[i] == '1')
                {
                    continue;
                }
                else if (primstr[i] != '1')
                {
                    primstr[i] = '1';
                    c++;
                    if (c == k)
                    {
                        break;
                    }
                }
            }
            else if (i > 0)
            {
                if (primstr[i] == '0')
                {
                    continue;
                }
                else if (primstr[i] != '0')
                {
                    primstr[i] = '0';
                    c++;
                    if (c == k)
                    {
                        break;
                    }
                }
            }
        }
        cout << primstr << endl;
    }
    else if (k == 0)
    {
        cout << primstr << endl;
    }

    return 0;
}