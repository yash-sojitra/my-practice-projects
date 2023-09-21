#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int f1 = 0;
        int n, num, flag = 1;
        long long int sum = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            if (num == 1)
                f1++;
            sum += num;
        }

        if (f1 > (n / 2) && (sum - f1 < n))
            flag = 0;

        if (n == 1)
            flag = 0;

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}