#include<stdio.h>
#include<conio.h>

int main()
{
    int i, n;
    float S;
    S = 0; i = 1;
    printf("\nNhap gia tri n=");
    scanf("%d", &n);
    while (i<=n)
    {
        S = S + 1.0 / (i*(i+1));
        i++;
    }
    printf("\nS = %f", S);
    return 0;
}