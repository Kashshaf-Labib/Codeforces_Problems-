/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
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
        long long x, y, a, b;
        cin >> x >> y >> a >> b;
        long long sum1 = 0, sum2 = 0, sum3 = 0;
        if (x == y)
        {
            if (x == 0)
            {
                cout << "0" << endl;
            }
            else
            {
                sum1 = (b * x);
                sum2 = 2 * (a * x);

                if (sum1 < sum2)
                    cout << sum1 << endl;
                else
                    cout << sum2 << endl;
            }
        }
        else if (x > y)
        {
            int temp = x - y;
            sum3 = temp * a;
            x = y;
            sum1 = (b * x);
            sum2 = 2 * (a * x);

            if (sum1 < sum2)
                cout << sum1 + sum3 << endl;
            else
                cout << sum2 + sum3 << endl;
        }
        else if (y > x)
        {
            int temp = y - x;
            sum3 = temp * a;
            y = x;
            sum1 = (b * x);
            sum2 = 2 * (a * x);

            if (sum1 < sum2)
                cout << sum1 + sum3 << endl;
            else
                cout << sum2 + sum3 << endl;
        }
    }

    return 0;
}