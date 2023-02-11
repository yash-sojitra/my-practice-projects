#include <iostream>

using namespace std;

int factorial(int a)
{

    int ans = 1;
    for (int i = 1; i <= a; i++)
    {
        ans = ans * i;
    }
    return ans;
}

int nCr(int n, int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}

int main()
{
    int n ,r,answer;
    cin >> n >> r;

    int ans = nCr(n,r);

    return 0;
}