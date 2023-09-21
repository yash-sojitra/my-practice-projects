#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, size = 0, flag = -1, ans = 1;
    cin >> t;
    while (t--)
    {
        string queries;
        cin >> queries;
        for (int i = 0; queries[i] != '\0'; i++)
        {
            if (queries[i] == '+')
            {
                size++;
            }
            else if (queries[i] == '-')
            {
                size--;
            }
            else if (queries[i] == '1')
            {
                if (flag = -1)
                {
                    flag = 1;
                }
                else if(size>=2 && flag == 0){
                    ans = 0;
                    break;
                }

            }
            else if(queries[i] == '0')
            {
                if (flag = -1)
                {
                    flag = 0;
                }
                else if(size>=2 && flag == 1){
                    ans = 0;
                    break;
                }
                else if(size<2){
                    cout<<"hi"<<endl;
                    ans = 0;
                    break;
                }
            }
        }
        if(ans)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }  
    }
    return 0;
}