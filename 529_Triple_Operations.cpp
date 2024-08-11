/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 2e5 + 9;

int preCalc[N];

int operationsToZero(int x)
{
    if (x == 0)
        return 0;

    int count = 0;
    while (x > 0)
    {
        x /= 3;
        count++;
    }
    return count;
}

int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 1; i <= N; i++)
    {
        preCalc[i] = preCalc[i - 1] + operationsToZero(i);
    }

    int t;
    cin >> t;

    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int initialOps = operationsToZero(l);

        int prefSum = preCalc[r] - preCalc[l - 1];

        cout << prefSum + initialOps << endl;
    }

    return 0;
}
