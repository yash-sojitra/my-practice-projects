#include <iostream>

using namespace std;

void altswap(int arr[], int size)
{
    for (int i = 0; i < size/2; i++)
    {
        int temp = arr[2*i];
        arr[2*i] = arr[2*i+1];
        arr[2*i+1] = temp;
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int size = 20;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    altswap(arr,size);

    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << " ";
    }

    cout << endl;
    return 0;
}