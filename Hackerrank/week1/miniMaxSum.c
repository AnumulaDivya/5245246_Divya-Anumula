void miniMaxSum(int arr_count, int* arr) {
    long long int sum = 0;
    long long int min_Val = arr[0]; // Initialize with first element
    long long int max_Val = arr[0]; // Initialize with first element

    for (int i = 0; i < 5; i++) {
        sum += arr[i];
        if (arr[i] < min_Val) {
            min_Val = arr[i];
        }
        if (arr[i] > max_Val) {
            max_Val = arr[i];
        }
    }

    long long int min_Sum = sum - max_Val;
    long long int max_Sum = sum - min_Val;

    printf("%lld %lld\n", min_Sum, max_Sum);

}