#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int sum = 0;
    int n = -6;
    int mod = abs(n);
    int answer = 0;
    int i = 0;

    cout<<mod;

    while (mod != 0)
    {
        int digit = mod&1;

        if(digit == 0){
            answer = ((digit+1) * pow(10,i)) + answer;
        }
        else{
            answer = ((digit-1) * pow(10,i)) + answer;
        }
        mod>>1;
        i++;
    }
    cout<<answer<<endl;
}