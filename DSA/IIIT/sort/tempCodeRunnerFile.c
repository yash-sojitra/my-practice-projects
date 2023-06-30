int n;
    printf("enter no of elements: \n");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d",&arr[i]);

    printf("array before sorting: \n");
    printArr(arr, n);
    heap_sort(arr, n);
    printf("array after sorting: \n");
    printArr(arr, n);