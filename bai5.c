include<stdio.h>
#include<conio.h>

int main()
{
    int i, n;
    float S;
    S = 0;
    do
    {
        printf("\nNhap n: ");
        scanf("%d", &n);
        if(n < 1)
        {
            printf("\nNhap n>=1");
        }

    }while(n < 1);

    for (i = 0; i < n; i++)
    {
        S = S + 1.0 / (2*i+1);
    }
    printf("\nTong = %.2f", S);
    return 0;
}