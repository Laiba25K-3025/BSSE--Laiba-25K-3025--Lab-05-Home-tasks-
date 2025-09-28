#include<stdio.h>
int main(){
	char room;
	char action;
	
	printf("Enter room (K for kitchen,L for living room):");
	scanf(" %c",&room);
	
    printf("Enter action (T for thermostat,L for lights):");
	scanf(" %c",&action);
	
	if (room == 'K'){
		if (action == 'L'){
			printf("Adjusting ambient lighting.;");
		}
		else if (action == 'T'){
			printf("Setting living room temperature.");
		}
	}
	else if (room == 'L'){
		if (action == 'L'){
			printf("Turn on bright task lighting");
		}
		else if (action == 'T'){
			printf("Setting kitchen temperature.");
		}
    } 
    return 0;
}
