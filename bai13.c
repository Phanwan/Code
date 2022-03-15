#include<stdio.h>

int main()
{
    int x, n, i=1, s=0;
    printf("Nhap x, n: ");
    scanf("%d%d", &x, &n );
    for (i = 1; i <= n; i++)
    {
        s += pow(x,2*i);
    }
    printf("\nTong la %d",s);
    return 0;
}
    
