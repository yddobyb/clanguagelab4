#include <stdio.h>

void f1(int arr[], size_t n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    const size_t size =8;
    f1(arr, size);

    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);
    printf("%d\n", arr[2]);
    printf("%d\n", arr[3]);
    printf("%d\n", arr[4]);
    printf("%d\n", arr[5]);
    printf("%d\n", arr[6]);
    printf("%d\n", arr[7]);


    return 0;
}

void f1(int arr[], size_t n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

}