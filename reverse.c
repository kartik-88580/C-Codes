#include<stdio.h>
void main(){
    int n,rev=0,rem;
    printf("Enter the number to be reversed: ");
    scanf("%d",&n);
    while(n>0){
        rem = n%10;
        rev = (rev*10)+rem;
        n /=10;
    }
    printf("The reverse of the above number is: %d",rev);
}