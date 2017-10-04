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
int main(){
  char str1[] = "magic";
  printf("str1 is: \"%s\"\n", str1);//should print magic
  printf("true len of str1 is: %d\n", strlen(str1));
  printf("mylength of str1 is: %d\n", mystrlen(str1));//should return five
  printf("\n");

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
}
