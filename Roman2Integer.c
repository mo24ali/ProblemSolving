#include <stdio.h>
#include <string.h>

int romanToInt(char *s) {
    int romanValues[256] = {0};  // Initialize an array to store values for each Roman numeral character
    romanValues['I'] = 1;
    romanValues['V'] = 5;
    romanValues['X'] = 10;
    romanValues['L'] = 50;
    romanValues['C'] = 100;
    romanValues['D'] = 500;
    romanValues['M'] = 1000;

    int result = 0;
    int prevValue = 0;
    int i;
    for (i = 0; s[i] != '\0'; i++) {
        int currentValue = romanValues[s[i]];
        result += currentValue;

        if (currentValue > prevValue) {
            result -= 2 * prevValue;  // Subtract the value added in the previous iteration
        }

        prevValue = currentValue;
    }

    return result;
}

int main() {
    char romanNumber[] = "MMII";  // Change this to the Roman numeral you want to convert
    int intValue = romanToInt(romanNumber);

    printf("Roman numeral %s is equivalent to %d in integer.\n", romanNumber, intValue);

    return 0;
}
