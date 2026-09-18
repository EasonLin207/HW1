#include <stdio.h>

int main(void) {
    float totalMiles;
    float costPerGallon;
    float milesPerGallon;
    float parkingFees;
    float tolls;
    float totalCost;

    printf("請輸入一整天的總里程數 (公里/英里): ");
    scanf("%f", &totalMiles);

    printf("請輸入汽油每公升/加侖價格: ");
    scanf("%f", &costPerGallon);

    printf("請輸入每公升/加侖平均能行駛的里程: ");
    scanf("%f", &milesPerGallon);

    printf("請輸入一天的停車費: ");
    scanf("%f", &parkingFees);

    printf("請輸入一天的通行費 (過路費): ");
    scanf("%f", &tolls);

    /* 一天總花費 = (總里程 / 每單位里程 * 單位油價) + 停車費 + 通行費 */
    totalCost = (totalMiles / milesPerGallon * costPerGallon) + parkingFees + tolls;

    printf("\n您一天開車去工作的總花費為: %.2f 元\n", totalCost);

    return 0;
}