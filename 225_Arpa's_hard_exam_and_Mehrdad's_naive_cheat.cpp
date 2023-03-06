/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int arr[] = {8, 4, 2, 6};
    ll n;
    cin >> n;
    if (n == 0)
        cout << "1" << endl;

    else
    {
        cout << arr[(n - 1) % 4] << endl;
    }

    return 0;
}