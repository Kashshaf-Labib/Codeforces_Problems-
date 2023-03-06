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
        int n;
        cin >> n;
        int v[n];
        int min1 = INT_MAX;
        int min2 = INT_MAX;
        int index1 = -1;
        int index2 = -1;
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        if (n & 1)
        {
            cout << "Mike" << endl;
        }
        else
        {
            for (int i = 1; i <= n; i += 2)
            {
                if (v[i] < min1)
                {
                    min1 = v[i];
                    index1 = i;
                }
                if (v[i + 1] < min2)
                {
                    min2 = v[i + 1];
                    index2 = i + 1;
                }
            }
            if (min1 < min2)
            {
                cout << "Joe" << endl;
            }
            else if (min1 > min2)
            {
                cout << "Mike" << endl;
            }
            else if (min1 == min2)
            {
                if (index1 < index2)
                {
                    cout << "Joe" << endl;
                }
                else
                {
                    cout << "Mike" << endl;
                }
            }
        }
    }

    return 0;
}