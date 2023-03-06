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
        int flag = 0, procede = 0;
        vector<int> v1(n);
        vector<int> v2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
            v2[i] = v1[i];
        }

        sort(v2.begin(), v2.end(), greater<int>());
        for (int i = 0; i < n; i++)
        {
            if (v1[i] != v2[i])
            {
                procede = 1;
                break;
            }
        }
        if (procede == 0)
        {
            cout << "3" << endl;
        }
        else if (procede == 1)
        {
            sort(v2.begin(), v2.end());
            for (int i = 0; i < n; i++)
            {
                if (v2[i] != v1[i])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                cout << "0" << endl;
            else
            {
                if (v1[0] == v2[0] || v1[n - 1] == v2[n - 1])
                    cout << "1" << endl;
                else if (v1[0] == v2[n - 1] && v1[n - 1] == v2[0])
                    cout << "3" << endl;
                else
                    cout << "2" << endl;
            }
        }
    }
    return 0;
}