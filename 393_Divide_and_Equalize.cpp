/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e6 + 9;
int spf[N];
void smallestPrimeFactor()
{
    spf[1] = 1;
    for (int i = 2; i < N; i++)
    {
        spf[i] = i;
    }

    for (int i = 2; i < N; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i; j < N; j += i)
            {
                spf[j] = min(spf[j], i);
            }
        }
    }
}
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    smallestPrimeFactor();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        map<int, int> exp;

        for (int i = 0; i < n; i++)
        {
            int num = arr[i];
            while (num > 1)
            {
                int prime_factor = spf[num];
                while (num % prime_factor == 0)
                {
                    num /= prime_factor;
                    exp[prime_factor]++;
                }
            }
        }

        bool ans = true;

        for (auto x : exp)
        {
            if (x.second % n != 0)
            {
                ans = false;
                break;
            }
        }

        if (!ans)
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