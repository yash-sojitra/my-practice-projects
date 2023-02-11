#include <iostream>

using namespace std;

void arrrev(int arr[], int size)
{
    for (int j = 0; j < size/2; j++)
    {
        int temp = arr[j];
        arr[j] = arr[size - j - 1];
        arr[size - j - 1] = temp;
    }
}

int main()
{
    int arr[] = {2,7,4,5,9};
    int size = 5;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    arrrev(arr,size);
    
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}