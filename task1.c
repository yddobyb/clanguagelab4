#include <stdio.h>

int main(){

    const int arr[10] = {10,20,30,40,50,60,70,80,90,100};

    for(int i = 0; i < 10; i++){
        printf("index : %d, value: %d \n", i, arr[i]);
    }

    return 0;
}