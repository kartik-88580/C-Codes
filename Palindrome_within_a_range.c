/*
Program to find all the palindrome numbers in a range
loop1: is used to initiate the loop for the range
loop2: is used to find the reverse of the number 
condition1: to check whether the revrese of the number and the original number  are same or not
conditon2: to print the statement of the output
for the logic of the palindrome please refer to classnotes
*/
#include<stdio.h>
void main(){
	int lower_limit,upper_limit,rev,last_var,i,j,k,flag=0;
	printf("Please enter the lower limit for your search: ");
	scanf("%d",&lower_limit);
	printf("Please enter the upper limit for your search: ");
	scanf("%d",&upper_limit);
	//loop1
	for(i=lower_limit;i<=upper_limit;i++){
		k=j=i;
		rev=0;
		//loop2
		while(j>0){
			last_var=j%10;
			rev = (rev*10)+last_var;
			j /=10;
		}
		//condition1
		if(k==rev){
			flag +=1;
			//condition2
			if(flag==1){
				printf("Palindrome numbers within %d and %d are as follows\n",lower_limit,upper_limit);
				printf("%d\n",rev);
			}
			else{
				printf("%d\n",rev);
			}
		}
	}
}
