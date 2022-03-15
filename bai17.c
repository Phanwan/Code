#include<stdio.h>

int main()
{
    int x, n, i=1, gt=1;
    float s;
    printf("Nhap x, n: ");
    scanf("%d%d", &x, &n );
    for (i = 1; i <= n; i++)
    {
        gt=gt*i;
        s += pow(x,i)/gt;
    }
    printf("\nTong la %.2f", s);
    return 0;
}
    
