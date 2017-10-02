#include <stdio.h>
#include <string.h>

char* my_strncpy(char* destination, char* target){
	char * index;
	for(index = destination; *target != '\0'; index++){
		*index = *target;
		target++;
	}
	*index = *target;
	return destination;
}

int main(){
}
