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
        int n, a, b;
        cin >> n >> a >> b;
        if (n <= a)
        {
            cout << "1" << endl;
        }
        else if (n > a)
        {
            if (a <= b)
            {
                if (n % a)
                {
                    cout << (n / a) + 1 << endl;
                }
                else if (!(n % a))
                {
                    cout << (n / a) << endl;
                }
            }
            else if (a > b)
            {
                cout << "1" << endl;
            }
        }
    }

    return 0;
}