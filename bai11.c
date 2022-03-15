#include<stdio.h>

void main()
{
    int i, n, s=0, gt=1;
    printf("Nhap n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        gt=gt*i;
        s+=gt;
    }
    printf("\nTong la %d",s);
    return 0;
}
