#include <stdio.h>

double mean(const int data[], size_t length){
  int sum = 0;

  for (size_t i = 0; i< length; i++){
    sum += data[i];

  }
  return (sum * 1.0 / length);
}

int main(){
  const int data[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  const size_t length = 10;
  printf("Mean = %lf\n", mean(data, length));
  return 0;
}