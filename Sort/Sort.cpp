#include <algorithm>

void sort(int arr[])
{
    int size = sizeof(&arr) / sizeof(arr[0]);
    std::sort(arr, arr + size);
}
