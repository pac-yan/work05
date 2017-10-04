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
int mystrcmp(char* a,char* b){
    while(*a && *b){
        if(*a < *b){
            return -1;
        }
        else if(*a > *b){
            return 1;
        }
        a++;
        b++;
    }
    if(!*a && !*b){
        return 0;
    }
    else if(*a){
        return -1;
    }
    else{
        return 1;
    }
}
char * mystrchr(char*s,char c){
    while(*s){
        if(*s == c){
            return s;
        }
        else{
            s++;
        }
    }
    if(*s == c){
        return s;
    }
    return NULL;
}
char* mystrcat(char *dest, char *add) {
  int x = 0;
  char retstr[strlen(dest) + strlen(add) + 1]; 
  for(x = 0; x < strlen(dest); x ++) {
    retstr[x] = dest[x];      
  }
  int i = x;
  int z = 0;
  for(i; i < strlen(retstr); i ++) {
    for(z; z < strlen(add); z ++){
      retstr[i] = add[z]; 
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

  char str5[] = "aaa";
  char str6[] = "bbb";
  printf("str5 is \"aaa\"\n");
  printf("str6 is \"bbb\"\n");
  printf("default strcmp(str5,str6) is: %d\n",strcmp(str5,str6));
  printf("mystrcmp(str5,str6) is : %d\n",mystrcmp(str5,str6));

  char str7[] = "abcde";
  char c = 'c';
  printf("str7 is %s\n",str7);
  printf("c is %c\n",c);
  printf("default strchr(str7,c) is: %p\n",strchr(str7,c));
  printf("mystrchr(str7,c) is: %p\n",mystrchr(str7,c));
}
