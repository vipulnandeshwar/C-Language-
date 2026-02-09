#include <stdio.h>
void main() {
    int a,b,c;
    printf("Enter Number a: ");
    scanf("%d",& a);
     if (a%5 == 0){
        printf("%d is Divisible by 5",a);
    }
    else if (a%11 == 0) {
        printf("%d is divisible by 11",a);
    }
    
    else {
        printf("%d is not divisible by 5 and 11",a);
    }
}