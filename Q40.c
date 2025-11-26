#include <stdio.h>

int main() {
    int n, digit, flipped;
    int rev = 0, place = 1;

    scanf("%d", &n);

    while(n > 0) {
        digit = n % 10;
        flipped = (digit == 0) ? 1 : 0;  
        rev = rev + flipped * place;      
        n = n / 10;
    }

    printf("%04d", rev);  

    return 0;
}