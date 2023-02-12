/*
Pizza App: The objective of the app to make a pizza app with the following features
1. The app should have two sections Admin and User
2. Admin section
	2.1. Admin should be able to login and logout
	2.2. Should be able to have a view of the stocks available
	2.3. should be able to manage the stocks
3. User section
	3.1. User should be able to login and logout
	3.2. Should be able view the menu
	3.3. Should be able to order from the menu
*/
#include<stdio.h>
#include<string.h>//to compare string but you can do the same with numbers i am just making it look fancy
void main(){
	int main_choice,user_pass=1234,admin_pass=123,u_pass,a_pass,choice_for_section,value,admin_choice;
	char user_name[]="User1",admin_name[]="Admin1",u_id[20],a_id[20];
	while(1){
		//Main menu display
		printf("\n\n\n\t\t\t\t      Welcome to Pizza Servers\n\n");
		printf("\n\t\t\t\t\tPress 1 To Continue \n\t\t\t\t      Press 2 To Quit The App\n\t\t\t\t\t\t");
		scanf("%d",&main_choice);
		if (main_choice==1){
			while(1){
				printf("\n\t\t\t\t\t      Hello User \n\t\t\t\t       Press 1 if You Are A User\n\t\t\t\t      Press 2 If You Are The Admin\n\t\t\t\t   Press 3 To Go Back To The Main Menu  ");
				scanf("%d",&choice_for_section);
				if(choice_for_section==1){
					//User Section
					printf("%d",choice_for_section);
				}
				else if(choice_for_section==2){
					//Admin Section
					printf("\n\t\t\t\t\t   Welcome Admin");
					printf("\n\t\t\t\t\t   Please Enter Your ID  ");
					scanf("%s",&a_id);
					value = strcmp(a_id,admin_name);//strcmp(string1,string2) string compare function is used to compare two strings and returns a boolean value
					//strcmp returns 0 if the strings match and 1 if the strings donot match
					if (value==0){
						printf("\n\t\t\t\t\t  Please Enter Your Password  ");
						scanf("%d",&a_pass);
						if(a_pass==123){
							while(1){//The Admin interface
								printf("\n\t\t\t\t\t  Welcome %s",admin_name);
								printf("\n\t\t\t\t\t      Press 1 To View The Menu\n\t\t\t\t\t      Press 2 To Manage Stock\n\t\t\t\t\t      Press 3 To Logout");
								scanf("%d",&admin_choice);
								if(admin_choice==1){
									printf("\n\t\t\t\t\tThis Is The Menu");
								}
								else if(admin_choice==2){
									printf("\n\t\t\t\t\tStock Management");
								}
								else if(admin_choice==3){
									printf("\n\t\t\t\t\tYou Have Successfully Loged Out");
									break;
								}
								else{
									printf("\n\t\t\t\t\t      Admin Please Choose From The Given Option");
								}
							}
						}
						else{
							printf("\n\t\t\t\t\t      Please Enter Correct Password");
						}
					}
					else{
						printf("\n\t\t\t\t\t      Wrong ID");
					}
				}
				else if(choice_for_section==3){
					//Going back to the main menu
					printf("\n\t\t\t\t        Going Back To The Main Menu\n\n");
					break;
				}
				else{
					printf("\n\t\t\t\t\tPlease Choose A Correct Option\n");
				}
			}
		}
		else if(main_choice==2){//main else if to quit the app
			printf("\n\n\n\t\t\t\t      Thanks For Using The App \n\t\t\t\t\t    Visit Again");
			break;
		}
		else{//main else for the wrong choices
			printf("\n\n\t\t\t\tPlease Choose And Option From The Menu");
		}
	}
}
