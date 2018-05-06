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
            printf(" "); /*in ra màn hình khoảng trắng đến vị trí thứ n-i */
            for(j=1;j<=2*i-1;j++)
                printf("*"); /*tiếp tục in ra màn hình * tại vị trí 1 và 2*i-1 */
        printf("\n");  /* chuyển xuống hàng tiếp theo */
    }

    return 0;
}
