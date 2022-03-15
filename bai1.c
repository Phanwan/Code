#include<stdio.h>
int main()
{
    int i, n;
    int S;
    S=0;
    i=1;
    printf("\nNhap gia tri n:");
    scanf("%d", &n);
    while (i<=n)
    {
        S=S+i;
        i++;
    }
    printf("\nTong S(n) = %d", S);
    return 0;
}
