#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    int i = 1;
    int count = 1;

    while (i <= n)
    {

        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j;
            j++;
        }

        int start = i - 1;
        while (start)
        {
            cout <<"*";
            start--;
        }

        int k = 2;
        while (k <= i)
        {
            cout << "*";
            k++;
        }

        int l = n-i+1;

        while (l>=1)
        {
            cout << l;
            l--;
        }
        

        cout << endl;
        i++;
    }
}

#include <iostream>
