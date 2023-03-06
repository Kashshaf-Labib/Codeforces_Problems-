/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n, bowl, plate, c = 0, newind;
    cin >> n >> bowl >> plate;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 2)
        {
            newind = i;
            break;
        }
        else if (v[i] == 1)
        {
            if (bowl == 0)
            {
                c++;
                bowl = 1;
            }
            bowl--;
        }
    }
    int total = bowl + plate;
    for (int i = newind; i < n; i++)
    {
        if (total == 0)
        {
            c++;
            total = 1;
        }
        total--;
    }

    cout << c << endl;

    return 0;
}