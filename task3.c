#include <stdio.h>

int main(){
  printf("Enter a string: ");
  char str[100];
  scanf("%s",str);

  for(int i = 2; str[i] != '\0'; i++){
    printf("%c", str[i-1]);
  }


    return 0;
}