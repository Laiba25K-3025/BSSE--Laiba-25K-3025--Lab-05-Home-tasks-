#include<stdio.h>
int main(){
	int password,username;
	
	printf("Enter username:");
	scanf("%d",&username);
	
	printf("Enter password:");
	scanf("%d",&password);
	
	if (username == 3025){
		if (password == 1234){
			printf("You are logged in.");
		}
		else{
			printf("Password incorrect.");
		} 
    } 
	else{
		printf("Username not found.");
	}	
		
	return 0;
	
	
}
