/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int c = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }
    for (int i = 0; i < n; i++)
    {
        auto val = v.back();
        v.pop_back();
        auto sum = accumulate(v.begin(), v.end(), 0);
        if (sum % 2 == 0)
            c++;
        v.insert(v.begin(), val);
    }
    cout << c << endl;

    return 0;
}