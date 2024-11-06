#include <stdio.h>
void intergerType()
{
    int x = 0b1011; // 2
    int y = 0x10;   // 2
    int z = 10;

    printf("The x in Octal:%o\n", x);
    printf("The x in Decimal:%d\n", x);
    printf("The x in Hexadecimal:%x\n", x);
    printf("=================\n");

    printf("The y in Octal:%o\n", y);
    printf("The y in Decimal:%d\n", y);
    printf("The y in Hexadecimal:%x\n", y);
    printf("=================\n");

    printf("The z in Octal:%o\n", z);
    printf("The z in Decimal:%d\n", z);
    printf("The z in Hexadecimal:%x\n", z);
}