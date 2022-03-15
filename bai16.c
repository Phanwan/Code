#include<stdio.h>

int main()
{
    int x, n, i=1, t=0;
    float s;
    printf("Nhap x, n: ");
    scanf("%d%d", &x, &n );
    for (i = 1; i <= n; i++)
    {
        t+=i;
        s += pow(x,i)/t;
    }
    printf("\nTong la %.2f", s);
    return 0;
}
    
