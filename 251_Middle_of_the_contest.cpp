/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int h1, m1, h2, m2;
    int time1, time2, newtime;
    scanf("%d:%d", &h1, &m1);
    scanf("%d:%d", &h2, &m2);
    time1 = (h1 * 60) + m1;
    time2 = (h2 * 60) + m2;
    int x = (time2 - time1) / 2;
    if (time1 < time2)
    {
        newtime = time1 + x;
    }
    else if (time1 > time2)
    {
        newtime = time2 + x;
    }
    printf("%.2d:%.2d\n", newtime / 60, newtime % 60);

    return 0;
}