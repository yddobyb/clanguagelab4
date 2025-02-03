#include <stdio.h>

int main(void){
  printf("Enter a name: ");
  char name[100];
  scanf("%s",name);
  printf("Hello %s!", name);

  return 0;
}