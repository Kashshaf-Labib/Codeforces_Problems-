#include <iostream>
using namespace std;
int main()
{
    string s1, s2 = {"heidi"};
    int c = 0, j = 0;
    cin >> s1;
    for (int i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] == s2[j])
        {
            c++;
            j++;
        }
    }
    if (c == 5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}