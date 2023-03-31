#include <iostream>

using namespace std;

int main()
{

    char s[] = "1010";
    int k = 2;

    int l = sizeof(s)/sizeof(s[0]);
        int i = 0 , j = l-1;
        while(k>=0 && i<=j)
        {
            if(s[i] == '0' && s[j] == '1')
            {
                cout<<123;
                s[i] == '1';
                s[j] == '0';
                i++;
                j--;
                k--;
            }
            if(s[i] == '1'){
                cout<<1;
                i++;
                cout<<11;
            }

            if(s[j] == '0'){
                cout<<12;
                j--;
            }
            // cout<<1234;
        }
    cout<<s<<endl;
    return 0;
}