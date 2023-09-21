#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        int l, r, a, b, gcd, flag = 0;
        cin >> l >> r;
        int i = l +(r-l)/2;
        while (l < r)
        {
            for (int j = 1; j < i; j++){
                //a = j;
                //b = i - j;
                gcd = __gcd(j, i-j);
                if (gcd != 1){
                    a = j;
                    b = i - j;
                    flag = 1;
                    break;
                }
            }
            if (flag)
                break;
            else
            {
                r = i - 1;
            }
            
            i = l +(r-l)/2;
        }
        if (flag)
            cout << a << ' ' << b << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}