#include <stdio.h>

int main()
 {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a == 0) {
        printf("No 1s in the binary representation.\n");
        return 0;
    }

    int position = 1; // start counting from LSB
    int temp = a;

    while ((temp & 1) == 0) { // check if LSB is 0
        temp = temp >> 1;     // right shift to check next bit
        position++;           // move to next bit position
    }

    printf("Position of first 1 from LSB: %d\n", position);

    return 0;
}
