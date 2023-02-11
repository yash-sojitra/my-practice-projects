#include <iostream>
using namespace std;

void printCount(int n)
{
    for (int i = 0; i <= n; i++)
    {
        cout << i << endl;
    }
}

int main()
{
    printCount(10);
    printCount(20);
    return 0;
}