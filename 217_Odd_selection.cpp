/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solution()
{
    int n, x;
    int even = 0, odd = 0;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num % 2 == 0)
            even++;
        else
            odd++;
    }
    if (odd == 0)
    {
        cout << "No" << endl;
        return;
    }
    for (int i = 1; i <= odd; i += 2)
    {
        if (i > x)
            break;

        if ((x - i) <= even)
        {
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
}

int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }

    return 0;
}