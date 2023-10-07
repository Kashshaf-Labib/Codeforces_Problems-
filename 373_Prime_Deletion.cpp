/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
#include <sstream>
using namespace std;
const int N = 1e5 + 9;
bool isPrime[N];

void sieve()
{
    for (int i = 2; i < N; i++)
    {
        isPrime[i] = true;
    }
    for (int i = 2; i * i < N; i++)
    {
        if (isPrime[i])
        {
            for (int j = i + i; j < N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}

int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    sieve();
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        bool found = false;

        int foundValue = 0;

        for (int i = 0; i < 8; i++)
        {
            string temp = "";
            temp = s[i] + temp;

            for (int j = i + 1; j < 9; j++)
            {
                string temp2 = temp + s[j];
                int num = 0;
                for (char c : temp2)
                {
                    num = num * 10 + (c - '0');
                }

                if (isPrime[num])
                {
                    found = true;
                    foundValue = num;
                    break;
                }
            }
        }

        if (found)
        {
            cout << foundValue << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}