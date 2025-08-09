char* timeConversion(char* s) {
        int hour = (10 * (s[0] - '0')) + (s[1] - '0'); // Extract hour as integer

    if (s[8] == 'P') { // If PM
        if (hour < 12) { // If not 12 PM, add 12 to hour
            hour += 12;
        }
    } else { // If AM
        if (hour == 12) { // If 12 AM, convert to 00
            hour = 0;
        }
    }

    // Update the hour in the string
    s[0] = (char)((hour / 10) + '0');
    s[1] = (char)((hour % 10) + '0');

    // Null-terminate the string before the AM/PM part
    s[8] = '\0';

    return s;
}