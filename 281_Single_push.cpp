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
        int n, flag = 0, start = 0, end = 0, x = 0;
        cin >> n;
        int arr1[100005], arr2[100005];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> arr2[i];
            if (arr1[i] > arr2[i])
            {
                flag = 1;
            }
            if (arr2[i] - arr1[i] > 0 && x == 0)
            {
                x = arr2[i] - arr1[i];
                start = i;
            }
            if (arr2[i] - arr1[i] > 0 && x != 0)
            {
                x = arr2[i] - arr1[i];
                end = i;
            }
        }
        if (flag == 0)
        {
            for (int i = start; i <= end; i++)
            {
                arr1[i] = arr1[i] + x;
            }
            for (int i = 1; i <= n; i++)
            {
                if (arr1[i] != arr2[i])
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}