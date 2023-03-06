/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int c = 0;
    int day[7];
    for (int i = 0; i < 7; i++)
    {
        cin >> day[i];
    }
    int i = 0;
    while (c < n)
    {
        i++;
        if (i > 7)
        {
            i = 1;
        }
        c = c + day[i-1];
    }
    cout << i << endl;

    return 0;
}