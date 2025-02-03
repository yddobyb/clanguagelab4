#include <stdio.h>

int minimum(const int data[][10], const size_t n) {
    int min_value = data[0][0];
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < 10; j++) {
            if (data[i][j] < min_value) {
                min_value = data[i][j];
            }
        }
    }
    return min_value;
}

int main() {
    int array[3][10] = {
        {5, 1234, 8, 756, 9, 3, 7, 4, 6, 22},
        {15, 12, 18, 11, 19, 13, 17, 14, 16, 10},
        {25, 22, 28, 21, 2, 23, 27, 24, 26, 20}
    };

    size_t rows = 3;

    int min = minimum(array, rows);
    printf("The minimum value in the array is: %d\n", min);
    
    return 0;
}