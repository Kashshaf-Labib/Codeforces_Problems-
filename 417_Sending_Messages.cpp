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
        ll n, f, a, b;
        cin >> n >> f >> a >> b;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        //cout << f - b << " " << f - (arr[0] * a) << endl;

        if (f - b < f - (arr[0] * a))
        {

            f -= (arr[0] * a);
        }
        else
        {
            f -= b;
        }
        //cout << f << endl;

        for (int i = 0; i < n - 1; i++)
        {
            if (f - b < f - ((arr[i + 1] - arr[i]) * a))
            {
                f -= ((arr[i + 1] - arr[i]) * a);
            }
            else
            {

                f -= b;
            }
        }

        //cout << f << endl;

        if (f <= 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}