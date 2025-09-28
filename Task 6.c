#include <stdio.h>

int main() {
    char room, action;

    printf("Enter room (L for Living Room, K for Kitchen): ");
    scanf(" %c", &room);   // notice the space before %c to handle newline

    printf("Enter action (L for Lights, T for Thermostat): ");
    scanf(" %c", &action);
    
    switch (room) {
    	case'L':
    		switch (action){
    			case 'L':
                    printf("Adjusting ambient lighting.");
                    break;
                case 'T':
                    printf("Setting living room temperature.");
                    break;
                default:
                    printf("Invalid action input.");
			}
			break;
		case 'K':
			switch (action){
				case 'L':
                    printf("Turning on bright task lighting.");
                    break;
                case 'T':
                    printf("Setting kitchen temperature.");
                    break;
                default:
                    printf("Invalid action input.");
			}
			break;
		default:
			printf("Invalid room input");
	}
	return 0;
}
