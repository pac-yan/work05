#include <stdio.h>
#include <string.h>

char* mystrncpy(char* destination, char* target,int amount){
	int index;
	for(index = 0; index < amount; index++){
		destination[index] = target[index];
	}
	destination[index] = '\0';
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

  char str1[] = "magic";
  printf("str1 is: \"%s\"\n", str1);//should print magic
  printf("true len of str1 is: %d\n", strlen(str1));
  printf("mylength of str1 is: %d\n", mystrlen(str1));//should return five
  printf("\n");

  char strcat1[] = "hi";
  char strcat2[] = " there";
  printf("str1 is: \"%s\"\n", strcat1);//should print "hi"
  printf("str1 is: \"%s\"\n", strcat2);//should print "there"
  printf("true cat of str1 is: \"%s\"\n", strcat(strcat1, strcat2));
  printf("mycat is: \"%s\"\n", mystrcat(strcat1, strcat2));//should return "hi there"
  
  char str2[] = "fish";
  char str3[5];
  printf("str2 is: \"%s\"\n",str2);//should print fish
  printf("char str3[5];\n");
  printf("default strncpy(str3, str2, 3): \"%s\"\n",strncpy(str3, str2, 3));
  char str4[5];
  printf("char str4[5];\n");
  printf("mystrncpy(str4, str2, 3): \"%s\"\n", mystrncpy(str4, str2, 3)); //should return "fis"

}
