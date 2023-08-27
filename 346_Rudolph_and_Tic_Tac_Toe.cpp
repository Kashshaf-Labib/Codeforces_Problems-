/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 3;
string s[N];

bool is_valid(int i, int j)
{
    return i >= 0 and i < 3 and j >= 0 and j < 3;
}
char winner;
bool found;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> s[i];
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (s[i][j] == 'X')
                {
                    if (is_valid(i + 1, j) and s[i + 1][j] == 'X' and is_valid(i + 2, j) and s[i + 2][j] == 'X')
                    {
                        winner = 'X';
                        found = true;
                    }
                    else if (is_valid(i - 1, j) and s[i - 1][j] == 'X' and is_valid(i - 2, j) and s[i - 2][j] == 'X')
                    {
                        winner = 'X';
                        found = true;
                    }
                    else if (is_valid(i, j + 1) and s[i][j + 1] == 'X' and is_valid(i, j + 2) and s[i][j + 2] == 'X')
                    {
                        winner = 'X';
                        found = true;
                    }
                    else if (is_valid(i, j - 1) and s[i][j - 1] == 'X' and is_valid(i, j - 2) and s[i][j - 2] == 'X')
                    {
                        winner = 'X';
                        found = true;
                    }
                    else if (is_valid(i + 1, j + 1) and s[i + 1][j + 1] == 'X' and is_valid(i + 2, j + 2) and s[i + 2][j + 2] == 'X')
                    {
                        winner = 'X';
                        found = true;
                    }
                    else if (is_valid(i - 1, j + 1) and s[i - 1][j + 1] == 'X' and is_valid(i - 2, j + 2) and s[i - 2][j + 2] == 'X')
                    {
                        winner = 'X';
                        found = true;
                    }
                    else if (is_valid(i + 1, j - 1) and s[i + 1][j - 1] == 'X' and is_valid(i + 2, j - 2) and s[i + 2][j - 2] == 'X')
                    {
                        winner = 'X';
                        found = true;
                    }
                    else if (is_valid(i - 1, j - 1) and s[i - 1][j - 1] == 'X' and is_valid(i - 2, j - 2) and s[i - 2][j - 2] == 'X')
                    {
                        winner = 'X';
                        found = true;
                    }
                }
                else if (s[i][j] == 'O')
                {
                    if (is_valid(i + 1, j) and s[i + 1][j] == 'O' and is_valid(i + 2, j) and s[i + 2][j] == 'O')
                    {
                        winner = 'O';
                        found = true;
                    }
                    else if (is_valid(i - 1, j) and s[i - 1][j] == 'O' and is_valid(i - 2, j) and s[i - 2][j] == 'O')
                    {
                        winner = 'O';
                        found = true;
                    }
                    else if (is_valid(i, j + 1) and s[i][j + 1] == 'O' and is_valid(i, j + 2) and s[i][j + 2] == 'O')
                    {
                        winner = 'O';
                        found = true;
                    }
                    else if (is_valid(i, j - 1) and s[i][j - 1] == 'O' and is_valid(i, j - 2) and s[i][j - 2] == 'O')
                    {
                        winner = 'O';
                        found = true;
                    }
                    else if (is_valid(i + 1, j + 1) and s[i + 1][j + 1] == 'O' and is_valid(i + 2, j + 2) and s[i + 2][j + 2] == 'O')
                    {
                        winner = 'O';
                        found = true;
                    }
                    else if (is_valid(i - 1, j + 1) and s[i - 1][j + 1] == 'O' and is_valid(i - 2, j + 2) and s[i - 2][j + 2] == 'O')
                    {
                        winner = 'O';
                        found = true;
                    }
                    else if (is_valid(i + 1, j - 1) and s[i + 1][j - 1] == 'O' and is_valid(i + 2, j - 2) and s[i + 2][j - 2] == 'O')
                    {
                        winner = 'O';
                        found = true;
                    }
                    else if (is_valid(i - 1, j - 1) and s[i - 1][j - 1] == 'O' and is_valid(i - 2, j - 2) and s[i - 2][j - 2] == 'O')
                    {
                        winner = 'O';
                        found = true;
                    }
                }
                else if (s[i][j] == '+')
                {
                    if (is_valid(i + 1, j) and s[i + 1][j] == '+' and is_valid(i + 2, j) and s[i + 2][j] == '+')
                    {
                        winner = '+';
                        found = true;
                    }
                    else if (is_valid(i - 1, j) and s[i - 1][j] == '+' and is_valid(i - 2, j) and s[i - 2][j] == '+')
                    {
                        winner = '+';
                        found = true;
                    }
                    else if (is_valid(i, j + 1) and s[i][j + 1] == '+' and is_valid(i, j + 2) and s[i][j + 2] == '+')
                    {
                        winner = '+';
                        found = true;
                    }
                    else if (is_valid(i, j - 1) and s[i][j - 1] == '+' and is_valid(i, j - 2) and s[i][j - 2] == '+')
                    {
                        winner = '+';
                        found = true;
                    }
                    else if (is_valid(i + 1, j + 1) and s[i + 1][j + 1] == '+' and is_valid(i + 2, j + 2) and s[i + 2][j + 2] == '+')
                    {
                        winner = '+';
                        found = true;
                    }
                    else if (is_valid(i - 1, j + 1) and s[i - 1][j + 1] == '+' and is_valid(i - 2, j + 2) and s[i - 2][j + 2] == '+')
                    {
                        winner = '+';
                        found = true;
                    }
                    else if (is_valid(i + 1, j - 1) and s[i + 1][j - 1] == '+' and is_valid(i + 2, j - 2) and s[i + 2][j - 2] == '+')
                    {
                        winner = '+';
                        found = true;
                    }
                    else if (is_valid(i - 1, j - 1) and s[i - 1][j - 1] == '+' and is_valid(i - 2, j - 2) and s[i - 2][j - 2] == '+')
                    {
                        winner = '+';
                        found = true;
                    }
                }
            }
        }
        if (found)
        {
            cout << winner << endl;
        }
        else
        {
            cout << "DRAW" << endl;
        }
        found = false;
    }

    return 0;
}