#include<stdio.h>
void main(){
    int a,b;
    printf("Enter the first number to be swapped: ");
    scanf("%d",&a);
    printf("Enter the second number to be swapped: ");
    scanf("%d",&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("The first number after swapping is %d",a);
    printf("\nThe second number after swapping is %d",b);
}