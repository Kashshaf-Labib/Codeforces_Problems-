#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int c = 0;
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int minm = *min_element(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > minm)
                c++;
        }
        cout << c << endl;
    }

    return 0;
}