#include <stdio.h>

int main(void) {
    /* 使用 5 個 printf 輸出 */
    printf("    *    \n");
    printf("   ***   \n");
    printf("  *****  \n");
    printf(" ******* \n");
    printf("*********\n\n");

    /* 改用 1 個 printf 輸出相同圖案 */
    printf("    *    \n   ***   \n  *****  \n ******* \n*********\n");

    return 0;
}