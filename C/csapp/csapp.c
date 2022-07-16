#define CRT_SECURE_NO_WARNNINGS_
#include <stdio.h>
#include <stdlib.h>
#define MAX 9

void inplace_swap(int *f, int *l);
void reverse_array(int *arr, int len);
void show_arr(const int *arr, const int len);
void Ti_2_11(void);

int main(void)
{
    Ti_2_11();
    system("pause");
    return 0;
}

void Ti_2_11(void)
{
    int a[MAX] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int cnt = sizeof(a) / sizeof(a[0]);
    printf("交换后：\n");
    show_arr(a, cnt);
    reverse_array(a, cnt);
    printf("交换前：\n");
    show_arr(a, cnt);
    return;
}
void show_arr(const int *arr, const int len)
{
    for (int i = 0; i <= len - 1; i++)
    {
        printf("%-4d ",arr[i]);
    }
    printf("\n");
    return;
}
void reverse_array(int *arr, int len)
{
    int f, l;
    f = 0;
    l = len - 1;
    for (int i = 0; f < l; i++) //这里不能用<=，否则会出现中间数变为0的现象
    {
        inplace_swap(&arr[f], &arr[l]); 
        f++;
        l--;
    }
    return;
}
void inplace_swap(int *f, int *l)
{
    *l = *f ^ *l;
    *f = *f ^ *l;
    *l = *f ^ *l;
    return;
}
