#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int c = 0, max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] >= arr[i - 1])
        {
            c++;
        }
        else
            c = 1;
        if (c >= max)
        {
            max = c;
        }
    }

    cout << max << endl;
    return 0;
}