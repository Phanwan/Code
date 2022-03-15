#include<stdio.h>
int giaithua(int n)
{
    if (n==1 || n==0)
       return 1;
    return n*giaithua(n-1);
}
int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Giai thua %d la: %d", n, giaithua(n));
    return 0;
}
