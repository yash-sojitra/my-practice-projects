#include <stdio.h>

int endTerm(int key)
{
    int a = 0;
    int b = 1;
    int count = 2;

    while (1)
    {
        int c = a + b;
        a=b;
        b=c;
        if(c>key)
        {
            break;
        }
        count++;
    }
    return count;
}

int fibTerm(int n)
{
    int a = 0;
    int b = 1;
    int c;

    if(n == 0){
        return a;
        }
    else if(n == 1){
        return b;
        }

    for(int i = 2; i <=n; i++)
    {
        c = a + b;

        a=b;
        b=c;
    }
    return c;
}

int binarySearch(int key)
{
    int s = 0;
    int e = endTerm(key);
    int mid = s +(e-s)/2;

    while (s<=e)
    {
        if(fibTerm(mid) == key)
        {
            return 1;
        }
        else if(fibTerm(mid)>key)
        {
            e = mid -1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s +(e-s)/2;
    }
    return 0;
}
int main()
{
    int key;
    scanf("%d", &key);

    if(binarySearch(key) == 1)
    {
        printf("the given value is present on the fibonaci series");
    }
    else
    {
        printf("the given value is absent on the fibonaci series");
    }

    return 0;
}