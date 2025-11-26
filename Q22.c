#include <stdio.h>

int main() {
    float costPrice, sellingPrice;
    float amount, percentage;

   
    scanf("%f %f", &costPrice, &sellingPrice);

    if (sellingPrice > costPrice) {
        amount = sellingPrice - costPrice;
        percentage = (amount / costPrice) * 100;
        printf("Profit %.0f%%\n", percentage);
    } else if (sellingPrice < costPrice) {
        amount = costPrice - sellingPrice;
        percentage = (amount / costPrice) * 100;
        printf("Loss %.0f%%\n", percentage);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}