#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int arr[5][5] = {0};
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            if (arr[i][j] % 2)
                cout << (arr[i][j] + arr[i - 1][j] + arr[i][j - 1] + arr[i + 1][j] + arr[i][j + 1] + 1) % 2;
        }
        cout << endl;
    }

    return 0;
}