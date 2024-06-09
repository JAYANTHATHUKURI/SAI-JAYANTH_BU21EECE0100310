#include <stdio.h>

#define COUNT_SET_BITS(num) ({ int count = 0, n = (num); while (n) { count += n & 1; n >>= 1; } count; })

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    int setBitsCount = COUNT_SET_BITS(number);
    printf("The number of set bits in the binary representation of %d is: %d\n", number, setBitsCount);
    return 0;
}