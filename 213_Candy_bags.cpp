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
    int flag = 0;
    int x = n * n;
    for (int i = 1; i <= x / 2; i++)
    {
        cout << i << " " << (x + 1 - i) << endl;
        
    }

    return 0;
}