#include <iostream>

using namespace std;

int main()
{
    int n = 4;
    int arr[n][n] = {{1,1,1,1},
                     {2,2,2,2},
                     {3,3,3,3},
                     {4,4,4,4}};

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        cout<<arr[i][j];
    }
    cout<<endl;
}
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        cout<<arr[i][j];
    }
    cout<<endl;
}
    return 0;
}