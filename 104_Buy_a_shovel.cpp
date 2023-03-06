#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, r, x;
    cin >> k >> r;
    for (int i = 1;; i++)
    {
        x = k * i;
        if ((x % 10) == r || (x % 10) == 0)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}