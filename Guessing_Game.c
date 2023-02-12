/*
Guessing Game: The objective is to make a guessing game using only variable decision making and loops
1. The user will be given a maximum three chances to guess the correct answer
2. 10 points for correct answer in first attempt
3. 5 points for correct answer in second attempt
4. 3 points for correct answer in third attempt
5. The user will be given hints as per requirement 1 point will be deducted for each hint and maximum 
of three hints will be given
*/
#include<stdio.h>
void main(){
	int n=6,input_var,counter=3,point=10,choice,flag=1;
	char hint1 []= "The number is a multiple of 2";//string for storing hints
	char hint2 []= "The number is less than 10";
	char hint3 []= "The number is not divisible by 4";
	while(1){//infinite loop
		printf("\n\n\t\t\t     Guessing Game");//Heading of the game
		printf("\n\t\t\tGuess The Number To Win: ");//Instruction for the game
		printf("\n\t\t\tPress 1 for hint or 2 to give your answer: ");
		scanf("%d",&choice);
		if(choice==2){
			printf("\n\t\t\tWhat is your guess");
			scanf("%d",&input_var);//Taking the input
			if(input_var==n){//condition for checking whether the answer is correct or not
				if(counter==3){//condition for checking the number of attempts and coresponding points
					printf("\n\t\t\tCongratulations you have won %d points",point);
					break;
				}
				else if(counter==2){//condition for checking the number of attempts and coresponding points
					point -=5;
					printf("\n\t\t\tCongratulations you have won %d points",point);
					break;
				}
				else{//condition for checking the number of attempts and coresponding points
					point -=7;
					printf("\n\t\t\tCongratulations you have won 3 points");
				}
			}
			else{
				counter -=1;
				if(counter==0){//Exit game if no attempts left 
					printf("\n\t\t\tYou have lost the game");
					break;
				}
				else{//Showcasing the attempts left
					printf("\n\t\t\tYou have only %d attempts left",counter);
				}
			}
		}
		else if(choice==1){
			if(flag==1){//checking number of hints
				printf("\n\t\t\t%s",hint1);
				point -=1;
				flag = flag+1;//for getting the number of asked hints
			}
			else if(flag==2){
				printf("\n\t\t\t%s",hint2);
				point -=1;
				flag = flag+1;
			}
			else{
				printf("\n\t\t\t%s",hint3);
				point -=1;
				flag = flag+1;
			}
		}
		else{
			printf("\n\t\t\tWrong choice");
		}
	}
	
}
