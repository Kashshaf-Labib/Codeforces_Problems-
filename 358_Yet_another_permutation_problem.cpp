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
        ll n;
        cin >> n;
        vector<int> arr;
        vector<int> is_visited(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            if (!is_visited[i])
            {
                for (int j = i; j <= n; j *= 2)
                {
                    is_visited[j]++;
                    arr.push_back(j);
                }
            }
        }

        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}