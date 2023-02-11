#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    int a =n, b=n;
    int sum=0, product= 1;

    while (a)
    {
        int digit = a%10;
        product *=digit;
        a =a/10;
    }
    
    while (b)
    {
        int digit = b%10;
        sum +=digit;
        b = b/10;
    }
    

    cout<<product-sum<<endl;
}