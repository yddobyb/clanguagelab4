#include <stdio.h>

size_t in_between(const int data[],  size_t length,  int val_1,  int val_2);

int main(void) {
    int data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    size_t length = 10;
    printf("total counts between val_1 and val_2 is %lu", in_between(data, length, 3, 7));

    return 0;
}

size_t in_between(const int data[],  size_t length,  int val_1, int val_2) {
    int count = 0;
    for (size_t i = 0; i < length; i++) {
        if (data[i] > val_1 && data[i] < val_2) {
            count++;

        }

    }
    return count;
}