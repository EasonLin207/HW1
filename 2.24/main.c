#include <stdio.h>

int main(void) {
    int num;

    printf("叫块俱计: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d 琌案计 (Even)\n", num);
    }
    if (num % 2 != 0) {
        printf("%d 琌计 (Odd)\n", num);
    }

    return 0;
}