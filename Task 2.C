#include<stdio.h>
int main ()
{
	int power;
	char LightColor;
	
	printf("Is power on?");
	scanf("%d",&power);
	
	
	if (power==1){
	    printf("Enter light color:");
	    scanf(" %c",&LightColor);
		if (LightColor=='R'){
			printf("Stop");
		}
		else if(LightColor=='Y'){
			printf("Caution");
		}
		else if (LightColor=='G'){
			printf("Go");
		}
		else {
			printf("Invalid input");
	    }
	}
	
	else if (power==0){
		printf("Signal off");
	}
	else{
		printf("Invalid input");
	}
	
		
		
	
	
	return 0;
	
}
