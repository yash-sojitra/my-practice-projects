#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> numbers;
        int product = 1;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin>>temp;
            numbers.push_back(temp);
        }
        (*min_element(numbers.begin(), numbers.end()))++;
        for (int i = 0; i < n; i++)
        {
            product *= numbers[i];
        }
        cout<<product<<endl;
    }
    return 0;
}