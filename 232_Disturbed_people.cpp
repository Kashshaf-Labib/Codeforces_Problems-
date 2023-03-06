/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n, c = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (v[i - 1] == 1 && v[i] == 0 && v[i + 1] == 1)
        {
            c++;
            i = i + 2;
        }
    }
    cout << c << endl;

    return 0;
}