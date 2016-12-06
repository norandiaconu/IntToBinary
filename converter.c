#include <stdio.h>
int main(int val, char *ints[])
{
    int value = 0;
    printf("Enter number to convert to binary\n");
    scanf("%i", &value);
    printBits(value);
    return 0;
}
