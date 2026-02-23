#include <stdio.h>
void main() {
    int a,b,c;
    printf("Enter Year: ");
    scanf("%d",& a);
     if (a%4 ==0 && (a%100 != 0 || a% 400== 0)){
        printf("%d is leap",a);
     }
    else {
        printf("%d is not leap",a);
    }
}