#include <stdio.h>
#include <math.h>

int max_abs(const int data[], size_t length){

  int max = 0;

  for (int i = 0; i<length; i++){
    if (fabs(data[i]) > fabs(max)){
      max = fabs(data[i]);
  }
  }

  return max;
}

int main(){
  int data[10] = {1, 7, 8, -9, -10};
  printf("%d\n", max_abs(data, 10));

  return 0;
}