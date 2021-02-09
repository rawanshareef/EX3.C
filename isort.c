#include <stdio.h>
#define length 50

void shift_element(int *arr, int i)
{
    if (i > 0)
    {
        for (int j = i; j > 0; j--)
        {
            *(arr + j) = *(arr + j - 1);
        }
    }
}

void insertion_sort(int *arr, int len)
{
    for (int i = 1; i < len; i++)
    {
        int key = *(arr + i);
        int k = i - 1;

        while (key < *(arr + k) && k >= 0)
        {
            *(arr + k + 1) = *(arr + k);
            k = k - 1;
        }
        *(arr + k + 1) = key;
    }
}

int main()
{
    int arr[length];
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &*(arr + i));
    }
    insertion_sort(arr, length);
    int j = 0;
    printf("%d", *(arr + j));
    j++;
    for (; j < length; j++)
    {
        printf(",%d", *(arr + j));
    }
    return 0;
}