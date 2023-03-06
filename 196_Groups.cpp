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
        int arr[n][5];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cin >> arr[i][j];
            }
        }
        string ans = "NO";
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (i != j)
                {
                    int c1 = 0, c2 = 0, c3 = 0;
                    int d1 = i, d2 = j;
                    for (int k = 0; k < n; k++)
                    {
                        if (arr[k][d1] == 1)
                            c1++;
                        if (arr[k][d2] == 1)
                            c2++;
                        if (arr[k][d1] == 0 && arr[k][d2] == 0)
                            c3++;
                    }
                    if (c1 >= n / 2 && c2 >= n / 2 && c3 == 0)

                    {
                        ans = "YES";
                        break;
                    }
                }
            }
            if (ans == "YES")
                break;
        }
        cout << ans << endl;
    }

    return 0;
}