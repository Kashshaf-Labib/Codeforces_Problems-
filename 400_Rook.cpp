/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int direction[] = {1, 2, 3, 4, 5, 6, 7, 8};
char dir[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        char avail = s[0];
        int numavail = s[1] - '0';

        for (int i = 0; i < 8; i++)
        {
            if (direction[i] != numavail)
            {
                cout << avail << direction[i] << endl;
            }
        }
        for (int i = 0; i < 8; i++)
        {
            if (dir[i] != avail)
            {
                cout << dir[i] << numavail << endl;
            }
        }
    }

    return 0;
}