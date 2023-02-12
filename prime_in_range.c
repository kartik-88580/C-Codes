/*
This program is related to prime number in a range.
here the variables are as follows:
i = iterating variable
l = lower limit of the range 
h = higher limit of the range
flag = is an indicator for prime number or not
*/
#include<stdio.h>
void main(){
    int i,l,h,flag;
    printf("Enter the lower limit of the range: ");
    scanf("%d",&l);//taking the input of the lower limit of the range
    printf("Enter the upper limit of the range: ");
    scanf("%d",&h);//taking the input of the upper limit of the range
    while(l<h){//while loop initiated for the range
        flag =0;//indicator is set to false
        if(l<=1){//if the value of the lower limit is set to less than or equal to 1 then the value of l is increased and continue is used so that the value is increased without the complete execution of the loop
            ++l;//increaseing the value of l
            continue;
        }
        /* loop for checking prime number*/
        for(i=2;i<=l/2;i++){
            if(l%i==0){
                flag =1;
                break;
            }
        }
        if(flag==0)
            printf("%d\n",l);
            ++l;
    }
}