#include <stdio.h>

size_t count_even (const int data [][7], size_t n);

int main(){
  int array[2][7] = {
    {5, 1234, 8, 756, 9, 3, 7},
    {15, 12, 18, 11, 19, 13, 17}
  };

  printf("%lu\n", count_even(array, 2));
  return 0;

}

size_t count_even (const int data [][7], const size_t n){
  int count = 0;

  for(int i = 0; i < n; i++){
    for (int j = 0; j < 7; j++){
      if(data[i][j] % 2 == 0){
        printf("%d\n ", data[i][j]);
        count++;

      }
    }
  }
  return count;
}