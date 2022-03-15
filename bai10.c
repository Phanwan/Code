#include<stdio.h>

int main()
{
    int x, n;
    float T;
    printf("\nNhap gia tri x va n ");
    scanf("%d%d", &x, &n);
    T=pow(x,n);
    printf("\nT = %f", T);
    return 0;
}