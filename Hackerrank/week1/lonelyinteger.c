int lonelyinteger(int a_count, int* a) {
    int lonely = 0; // Initialize a variable to store the lonely integer

    // Iterate through the array and XOR each element with 'lonely'
    for (int i = 0; i < a_count; i++) {
        lonely ^= a[i]; // XOR operation
    }

    return lonely; 
    
}
