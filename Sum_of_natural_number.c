#include<stdio.h>
void main(){
    int n,sum=0,m;
    printf("Enter the limit of the summation: ");
    scanf("%d",&n);
    m=n;
    while(n>0){
        sum +=n;
        n -=1;
    }
    printf("The sum of natural numbers till %d is %d ",m,sum);
}