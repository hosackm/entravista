#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 999999
typedef enum
{
    SORT_DESCENDING = 0,
    SORT_ASCENDING
} SORT_CONSTANTS;
typedef int elem;

void display_array(elem *arr, const unsigned int len);

int main(int argc, char *argv[])
{
    int i;
    elem arr[MAX_SIZE];
    for(i = 0; i < MAX_SIZE; ++i)
    {
        arr[i] = rand() % MAX_SIZE;
    }

    merge_sort(arr, MAX_SIZE, SORT_DESCENDING);

    display_array(arr, MAX_SIZE);

    return 0;
}

void display_array(elem *arr, const unsigned int len)
{
    unsigned int i;
    if(arr == NULL || len == 0) return;

    printf("%d", arr[0]);
    for(i = 1; i < len; ++i)
    {
        printf(" %d", arr[i]);
    }
    printf("\n");
}
