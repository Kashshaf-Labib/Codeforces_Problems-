#include <iostream>
using namespace std;
int main()
{
    int t;
    int n;
    cin >> t;
    while (t--)
    {
        int i = 3;
        cin >> n;
        for (i = 3; n % i > 0;)
        {
            i = i * 2 + 1;
        }
        cout << n / i << endl;
    }

    return 0;
}