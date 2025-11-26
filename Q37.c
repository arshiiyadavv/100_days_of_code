#include <stdio.h>

int main() {
    int a, b, max, lcm;

    scanf("%d %d", &a, &b);

    // Start from the maximum of a and b
    max = (a > b) ? a : b;

    while(1) {
        if(max % a == 0 && max % b == 0) {
            lcm = max;
            break;
        }
        max++;
    }

    printf("%d", lcm);

    return 0;
}