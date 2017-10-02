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
int mystrlen(char *str){
    int len = 0;
    int x = 0;
    for (x = 0; str[x] != 0; x++) 
    {
        len++;
    }
    return(len);
}
int main(){
  char str1[] = "magic";
  printf("str1 is: \"%s\"\n", str1);//should print magic
  printf("true len of str1 is: %d\n", strlen(str1));
  printf("mylength of str1 is: %d\n", mystrlen(str1));//should return five
}
