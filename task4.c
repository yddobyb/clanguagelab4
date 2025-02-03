#include <stdio.h>

void nonStart(const char arr[100],const char arr1[100]) {
   for (int i = 1; arr[i] != '\0'; i++) {
     printf("%c", arr[i]);
   }
   for(int i = 1; arr1[i] != '\0'; i++) {
     printf("%c", arr1[i]);
   }
}

int main() {
  nonStart("Hello", "There");

}