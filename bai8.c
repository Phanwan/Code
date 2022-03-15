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
        S = S + (float) (1-1.0/(2*i));
        i++;
    }
    printf("\nS = %f", S);
    return 0;
}