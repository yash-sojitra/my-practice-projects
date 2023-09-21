#include <bits/stdc++.h>

using namespace std;

int rmDigit(int n, int pos){
    char number[] = "123456789";
    int pos = 4, n = stoi(number);
    double a = pow(10, pos), b = pow(10, pos - 1);
    int num1 = ((n / a) / 10);
    int num2 = num1 * a;
    int num3 = n % int(a);
    int num4 = num2 + num3;
    cout << n << endl;
    cout << num4;
    return num4;
}

int main()
{
    int t, num,flag = 0;
    cin>>t;
    while(t--){
        cin>>num;
        while(!flag){
        for (int i = 2; i < num/2; i++)
        {
            if (num%i==0)
            {
                flag = 1;   
            }
        }
        }
        if(flag){
            cout<<num<<endl;
        }   
    }   
    return 0;
}