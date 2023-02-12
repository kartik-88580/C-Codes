#include<stdio.h>
void main(){
    printf("Multiplying 32 with 3 using bitwise operator");
    int a = 32;
    a = (a<<2)-a;
    printf("\n\n The third multiple of 32 is %d",a);
}