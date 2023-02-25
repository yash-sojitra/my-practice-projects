
        {
            printf("enter value of element :\n");
            scanf("%d", &newValue);
            arr = realloc(arr, (n+1)*sizeof(int));

            for (int i = 0; i < n+1; i++)
            {
                if (newValue < arr[i])
                {
                    for (int k = n+1; k > i; k++)
                    {
                        arr[k] = arr[k - 1];
                    }
                    arr[i] = newValue;
                }
            }
        n++;
        }