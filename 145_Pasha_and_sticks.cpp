#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n, m, c = 0;
    cin >> n;
    if (n % 2 != 0)
    {
        cout << "0" << endl;
    }
    else
    {
        for (int i = 2; i < (n / 2); i = i + 2)
        {
            m = n - i;
            c++;
        }
        cout << c << endl;
    }

    return 0;
}