#include <stdio.h>
int main()
{
    int i, j, n;

    printf("Nhap n: ");
    scanf("%d", &n);
    if(n>=8){
        printf("Moi ban nhap lai (n<8).");
        return 0;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            printf(" ");
            for(j=1;j<=2*i-1;j++)
                printf("*");
        printf("\n");
    }
    for(i=n-1;i>0;i--){
      for(j=1;j<n-i+1;j++)
         printf(" ");
            for(j=1;j<=2*i-1;j++)
                printf("*");
        printf("\n");
    }

    return 0;
}
