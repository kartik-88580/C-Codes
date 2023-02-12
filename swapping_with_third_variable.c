#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    c = a;
    a = b;
    b = c;
    printf("\nThe first number after swapping is %d",a);
    printf("\nThe second number after swapping is %d",b);
}