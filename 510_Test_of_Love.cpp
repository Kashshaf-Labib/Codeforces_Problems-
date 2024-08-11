/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        string path;
        cin >> path;
        path = 'L' + path + 'L';
        n += 2;

        vector<bool> visited(n, false);
        queue<pair<int, int>> q; //{position, already swum}
        q.push({0, 0});
        visited[0] = true;
        bool okay = false;
        while (!okay && !q.empty())
        {
            auto curr = q.front();
            q.pop();
            int pos = curr.first;
            int swum = curr.second;
            if (path[pos] == 'L')
            {
                for (int j = 1; j <= m; ++j)
                {
                    int newPos = pos + j;
                    if (newPos == n - 1)
                    {
                        okay = true;
                        break;
                    }
                    if (newPos < n && path[newPos] != 'C' && !visited[newPos])
                    {
                        visited[newPos] = true;
                        q.push({newPos, swum});
                    }
                }
            }
            if (path[pos] == 'W' && swum < k)
            {
                int newPos = pos + 1;
                if (newPos == n - 1)
                {
                    okay = true;
                    break;
                }
                if (newPos < n && path[newPos] != 'C' && !visited[newPos])
                {
                    visited[newPos] = true;
                    q.push({newPos, swum + 1});
                }
            }
        }

        if (okay)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
