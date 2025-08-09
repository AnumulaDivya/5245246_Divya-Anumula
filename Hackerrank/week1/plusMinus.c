void plusMinus(int arr_count, int* arr) {
   
    // Initialize counters for positive, negative, and zero elements
    double positiveCount = 0;
    double negativeCount = 0;
    double zeroCount = 0;

    // Iterate through the array to count elements
    for (int i = 0; i < arr_count; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    // Calculate ratios
    double positiveRatio = positiveCount / arr_count;
    double negativeRatio = negativeCount / arr_count;
    double zeroRatio = zeroCount / arr_count;

    // Print ratios with 6 decimal places
    printf("%.6f\n", positiveRatio);
    printf("%.6f\n", negativeRatio);
    printf("%.6f\n", zeroRatio);
}

