/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n, s;
    cin >> n >> s;
    vector<pair<double, double>> pr;
    for (int i = 0; i < n; i++)
    {
        double x, y;
        cin >> x >> y;
        pr.push_back(make_pair(x, y));
    }
    vector<double> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i] = (pr[i].first + pr[i].second / 100);
    }
    double maxfractPart = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (v[i] <= s)
        {
            flag = true;
            double x = s - v[i];
            double fractPart = 0, intPart;
            fractPart = modf(x, &intPart);
            if (maxfractPart < fractPart)
            {
                maxfractPart = fractPart;
            }
        }
    }
    if (flag)
    {
        string x = to_string(maxfractPart);
        string m = x.substr(x.find(".") + 1);
        cout << stoi(m.substr(0,2)) << endl;
    }
    else if (!flag)
    {
        cout << -1 << endl;
    }
    return 0;
}