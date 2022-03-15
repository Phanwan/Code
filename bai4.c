#include<stdio.h>
#include<conio.h>

int main()
{
    int i, n;
    float S;
    S = 0; i = 1;
    do
    {
        printf("\nNhap n: ");
        scanf("%d", &n);
        if(n < 1)
        {
            printf("\nNhap n>=1");
        }

    }while(n < 1);

    while(i <= n)
    {
        S = S + 1.0 / (2*i);
        i++;
    }
    printf("i = %d", i);
    printf("\nS = %f", S);
    return 0;
}