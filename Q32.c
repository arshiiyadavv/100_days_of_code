#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, digit, count = 0;
    int sum = 0;

    scanf("%d", &n);
    temp = n;

    
    int t = n;
    while(t > 0) {
        count++;
        t = t / 10;
    }

    
    t = n;
    while(t > 0) {
        digit = t % 10;
        sum = sum + pow(digit, count);
        t = t / 10;
    }

    
    if(sum == temp)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}