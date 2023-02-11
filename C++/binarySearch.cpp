#include <iostream>

using namespace std;

int binary_search(int arr[],int size, int key){    
    
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start)/2;

    while (start<=end)
    {

        if(arr[mid] == key){
            return mid;
        }

        else if(arr[mid] < key){
            start = mid +1; 
        }

        else{
            end = mid - 1;
        }
    
    mid = start + (end - start)/2;
    }
    return -1;
}


int main()
{
    int arr[] = {1,3,4,5,6,7,8,9};

    int index = binary_search(arr,8,9);
    cout<<"index you are looking for is : "<<index<<endl;
    return 0;
}