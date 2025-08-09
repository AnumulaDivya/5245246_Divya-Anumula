int birthday(int s_count, int* s, int d, int m) {
    int count = 0;

    // Iterate through all possible segments of length m
    for (int i = 0; i <= s_count - m; i++) {
        int sum = 0;

        // Sum the current segment of length m
        for (int j = 0; j < m; j++) {
            sum += s[i + j];
        }

        // Check if the sum matches the birthday
        if (sum == d) {
            count++;
        }
    }

    return count;
}
