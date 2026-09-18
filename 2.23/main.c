#include <stdio.h>

int main(void) {
    int a, b, c;
    int largest, smallest;

    printf("請輸入三個整數: ");
    scanf("%d %d %d", &a, &b, &c);

    largest = a;
    smallest = a;

    if (b > largest) largest = b;
    if (c > largest) largest = c;

    if (b < smallest) smallest = b;
    if (c < smallest) smallest = c;

    printf("最大值: %d\n", largest);
    printf("最小值: %d\n", smallest);

    return 0;
}