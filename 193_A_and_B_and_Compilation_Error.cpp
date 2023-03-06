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
    vector<int> v(n);
    vector<int> v1(n);
    vector<int> v2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < n - 2; i++)
    {
        cin >> v2[i];
    }
    sort(v.begin(), v.end(),greater<int>());
    sort(v1.begin(), v1.end(),greater<int>());
    sort(v2.begin(), v2.end(),greater<int>());
    for (int i = 0; i < n - 1; i++)
    {
        if (v1[i] != v[i])
        {
            cout << v[i] << endl;
            break;
        }
        else if (i == n - 2)
            cout << v[n - 1] << endl;
    }
    for (int i = 0; i < n - 2; i++)
    {
        if (v2[i] != v1[i])
        {
            cout << v1[i] << endl;
            break;
        }
        else if (i == n - 3)
            cout << v1[n - 2] << endl;
        
    }

    return 0;
}