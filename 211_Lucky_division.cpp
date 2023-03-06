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
    int num = n;
    int dig;
    int flag = 0;
    while (num != 0)
    {
        dig = num % 10;
        if (dig != 4 && dig != 7)
        {
            flag = 1;
            break;
        }
        num = num / 10;
    }
    if (flag == 1)
    {
        if (n % 4 == 0 || n % 7 == 0 || n % 44 == 0 || n % 47 == 0 || n % 74 == 0 || n % 77 == 0 || n % 444 == 0 || n % 474 == 0 || n % 477 == 0 || n % 447 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else if (flag == 0)
        cout << "YES" << endl;

    return 0;
}