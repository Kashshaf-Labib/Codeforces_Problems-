/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c;
    cin >> a >> b >> c;
    int arr[4];
    arr[0] = (a + b + c);
    arr[1] = (a * b * c);
    arr[2] = (a + b) * c;
    arr[3] = a * (b + c);
    cout << *max_element(arr, arr + 4) << endl;

    return 0;
}