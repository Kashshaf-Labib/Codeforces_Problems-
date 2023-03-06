/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    long long n, t;
    cin >> n >> t;
    if (n == 1 && t == 10)
    {
        cout << "-1" << endl;
    }
    else if (t == 10)
    {
        n--;
        while (n--)
        {
            cout << 1;
        }
        cout << "0" << endl;
    }
    else
    {
        while (n--)
        {
            cout << t;
        }
    }

    return 0;
}