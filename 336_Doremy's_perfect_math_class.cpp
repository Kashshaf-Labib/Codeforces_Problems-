/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = __gcd(arr[i], result);

        if (result == 1)
        {
            return 1;
        }
    }
    return result;
}
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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int gcd = findGCD(arr, n);
        if (gcd == 1)
        {
            cout << *max_element(arr, arr + n) << endl;
        }
        else
        {
            cout << (*max_element(arr, arr + n) / gcd) << endl;
        }
    }

    return 0;
}