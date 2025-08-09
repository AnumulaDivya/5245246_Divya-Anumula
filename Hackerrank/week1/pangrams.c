char* pangrams(char* s) {
    bool alphaPresent[26] = {false}; // Initialize all to false
    int count = 0; // To track the number of unique letters found

    for (int i = 0; s[i] != '\0'; i++) {
        char currentChar = tolower(s[i]); // Convert to lowercase for case-insensitivity
        if (currentChar >= 'a' && currentChar <= 'z') {
            int index = currentChar - 'a';
            if (!alphaPresent[index]) {
                alphaPresent[index] = true;
                count++;
            }
        }
    }

    if (count == 26) {
        return "pangram";
    } else {
        return "not pangram";
    }

}