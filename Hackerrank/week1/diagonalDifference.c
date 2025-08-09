int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    // Calculate the sum of the primary diagonal
    for (int i = 0; i < arr_rows; i++) {
        primaryDiagonalSum += arr[i][i];
    }

    // Calculate the sum of the secondary diagonal
    for (int i = 0; i < arr_rows; i++) {
        secondaryDiagonalSum += arr[i][arr_rows - 1 - i];
    }

    // Return the absolute difference
    return abs(primaryDiagonalSum - secondaryDiagonalSum);

}
