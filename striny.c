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
char mystrcat(char *dest, char *add) {
  int x = 0;
  char retstr[strlen(dest) + strlen(add)]; 
  for(x = 0; x < strlen(dest); x ++) {
    retstr[x] = dest[x];      
  }
  int i = x;
  int z = 0;
  for(i; i < strlen(retstr); i ++) {
    for(z; z < strlen(add); z ++){
      restr[i] = add[z];
      retstr[i] = *(add + cont); 
    }
  }
  return retstr;  
}


int main(){
  printf("strlen tests: \n");
  char strlen1[] = "magic";
  printf("str1 is: \"%s\"\n", strlen1);//should print magic
  printf("true len of str1 is: %d\n", strlen(strlen1));
  printf("mylength of str1 is: %d\n", mystrlen(strlen1));//should return five
  printf("strcat test: \n");
  char strcat1[] = "hi";
  char strcat2[] = " there";
  printf("str1 is: \"%s\"\n", strcat1);//should print "hi"
  printf("str1 is: \"%s\"\n", strcat2);//should print "there"
  printf("true cat of str1 is: \"%s\"\n", strcat(strcat1, strcat2));
  printf("mycat is: \"%s\"\n", mystrcat(strcat1, strcat2));//should return "hi there"
}
