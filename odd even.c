#include <stdio.h>
void main() {
    int a,b,c;
    printf("Enter Number a: ");
    scanf("%d",& a);
     if (a%2 == 0){
        printf("%d is even",a);
     }
    else {
        printf("%d is odd",a);
    }
}