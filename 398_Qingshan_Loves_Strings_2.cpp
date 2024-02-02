#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (n % 2 == 1 or s.find_first_not_of(s[0]) == string::npos)
        {
            cout << -1 << endl;
        }
        else
        {
            bool okay = true;
            int op = 0;
            int i = 0;
            deque<char> dq;
            for (int i = 0; i < n; i++)
            {
                dq.push_back(s[i]);
            }
            vector<int> ans;
            while (!dq.empty())
            {
                if (op > 300)
                {
                    okay = false;
                    break;
                }
                if (dq.front() != dq.back())
                {
                    dq.pop_front();
                    dq.pop_back();
                    i++;
                }
                else if (dq.front() == '0' and dq.back() == '0')
                {
                    op++;
                    ans.push_back(i + dq.size());
                    i++;
                    dq.pop_front();
                    dq.push_back('0');
                }
                else if (dq.front() == '1' and dq.back() == '1')
                {
                    op++;
                    ans.push_back(i);
                    i += 1;
                    dq.pop_back();
                    dq.push_front('1');
                }
            }
            if (okay and op <= 300 and dq.size() == 0)
            {
                cout << op << endl;
                for (auto x : ans)
                {
                    cout << x << " ";
                }
                cout << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}