// Write a C program to concatenate two strings without using the built-in string functions.
#include <stdio.h>

int main() {
    char str1[100] = "Hello ";
    char str2[] = "World!";
    int i = 0, j = 0;

    // Move i to the end of the first string
    while (str1[i] != '\0') {
        i++;
    }

    // Copy characters from str2 into str1 starting at index i
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    // Add the null terminator to the end of the combined string
    str1[i] = '\0';

    printf("Concatenated string: %s\n", str1);

    return 0;
}