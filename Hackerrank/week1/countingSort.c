int* countingSort(int arr_count, int* arr, int* resultCount) {
    int maxVal = 100; 
    int* freq_array = (int*) calloc(maxVal, sizeof(int));

    // Calculate frequency of each element
    for (int i = 0; i < arr_count; i++) {
        if (arr[i] < maxVal) { // Prevent out-of-bounds access
            freq_array[arr[i]]++;
        }
    }

    *resultCount = maxVal;
    return freq_array;

}