#include <stdio.h>

int main() {
    int i, j, rows = 5; // You can change the number of rows here

    // Outer loop for rows
    for (i = 1; i <= rows; ++i) {
        // Inner loop for columns (prints stars)
        for (j = 1; j <= i; ++j) {
            printf("* ");
        }
        // Move to the next line after each row
        printf("\n");
    }
    return 0;
}

