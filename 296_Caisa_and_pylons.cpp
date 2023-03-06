/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n;
    ll cost = 0, energy = 0;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    v.insert(v.begin(), 0);
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] < v[i + 1])
        {
            if (energy <= 0)
            {
                cost += v[i + 1] - v[i];
            }
            else if (energy > 0)
            {
                ll temp = v[i + 1] - v[i];
                if (temp == energy)
                {
                    energy -= temp;
                }
                else if (temp > energy)
                {
                    cost += temp - energy;
                    energy = 0;
                }
                else if (temp < energy)
                {
                    energy -= temp;
                }
            }
        }
        else if (v[i] > v[i + 1])
        {
            energy += v[i] - v[i + 1];
        }
    }
    cout << cost << endl;

    return 0;
}