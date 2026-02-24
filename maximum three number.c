#include <stdio.h>
void main() {
    int a,b,c;
    printf("Enter Number a: ");
    scanf("%d",& a);
    printf("Enter Number b: ");
    scanf("%d",& b);
    printf("Enter Number c: ");
    scanf("%d",& c);
     if (a>b && a>c){
        printf("%d is maximum",a);
    }
    else if (b>a && b>c){
        printf("%d is maximum",b);
    }
    else if (c>a && c>b){
        printf("%d is maximum",c);
    }
}