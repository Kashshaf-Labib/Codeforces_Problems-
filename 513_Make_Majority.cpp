/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;

        string b;
        for (int i = 0; i < n; i++)
        {
            if (i == 0 || a[i] != '0' || a[i - 1] != '0')
            {
                b += a[i];
            }
        }

        int count0 = 0, count1 = 0;
        for (char c : b)
        {
            if (c == '0')
                count0++;
            else
                count1++;
        }

        if (count1 > count0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
