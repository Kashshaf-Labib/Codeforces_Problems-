#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    string s[5] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    int n;
    cin >> n;
    while (n > 5)
    {
        n = n / 2 - 2;
    }
    cout << s[n - 1] << endl;
    return 0;
}