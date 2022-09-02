#include <stdio.h>
#include <math.h>

// in binary search array must be sorted

int arr[] = {8, 13, 27, 38, 48, 54, 69, 78, 82, 100};
int item = 100;
int main()
{
    int left, right, middle;
    left = 0;
    right = (sizeof(arr) / sizeof(arr[0])) - 1;
    while (left <= right)
    {
        middle = floor((left + right) / 2);
        if (arr[middle] == item)
        {
            printf("Item found at index %d\n", middle);
            return 0;
        }
        else if (arr[middle] < item)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }
    printf("Item not found\n");
    return 0;
}