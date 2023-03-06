/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
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
        int n;
        cin >> n;
        int arr[2], ind = 0;
        for (int i = 2; i < sqrt(n) && ind < 2; i++)
        {
            if (n % i == 0)
            {
                arr[ind] = i;
                n = n / i;
                ind++;
            }
        }
        if (ind != 2)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            cout << arr[0] << " " << arr[1] << " " << n << endl;
        }
    }

    return 0;
}