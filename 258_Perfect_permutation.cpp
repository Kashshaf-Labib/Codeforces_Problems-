/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    if (n % 2)
    {
        cout << "-1" << endl;
    }
    else
    {
        vector<int> v;
        for (int i = 1; i <= n; i += 2)
        {
            v.push_back(i + 1);
            v.push_back(i);
        }
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
    }

    return 0;
}