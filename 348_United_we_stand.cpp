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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<int> b, c;

        sort(v.begin(), v.end());

        int first_element = v[0];

        set<int> st;

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (v[i] == first_element)
            {
                count++;
            }
        }

        for (int i = 1; i <= count; i++)
        {
            b.push_back(first_element);
        }
        for (int i = count; i < n; i++)
        {
            c.push_back(v[i]);
        }

        if (b.size() == 0 or c.size() == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << b.size() << " " << c.size() << endl;

            for (auto x : b)
            {
                cout << x << " ";
            }
            cout << endl;
            for (auto x : c)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }

    return 0;
}