#include<stdio.h>

int main()
{
    int n, i=1, t=0;
    float s=0;
    printf("Nhap n: ");
    scanf("%d", &n );
    for (i = 1; i <= n; i++)
    {
        t += i;
        s += 1.0/t;
    }
    printf("\nTong la %f",s);
    return 0;
}
    