#include<stdio.h>
int main ()
{
	int power;
	char LightColor;
	
	printf("Is power on?");
	scanf("%d",&power);
	
	printf("Enter light color:");
	scanf(" %c",&LightColor);
	
	if (power==1){
		if (LightColor=='R'){
			printf("Stop");
		}
		else if(LightColor=='Y'){
			printf("Caution");
		}
		else if (LightColor=='G'){
			printf("Go");
		}
    }
	else{
		printf("Signal off");
	}
	
	return 0;
	
}
