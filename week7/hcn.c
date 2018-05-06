/* Cao Thi Nhi - 20132870 */
// Date Create: 20/3/2018

#include<stdio.h>

int main()
{
  int i, j, cd, cr;

	printf("Nhap chieu dai: ");
	scanf("%d", &cd);
    printf("Nhap chieu rong: ");
	scanf("%d", &cr);

	for(i=1;i<=cd;i++){
		for(j=1;j<=cr;j++){
			if(i==1 || i==cd || j==1 || j==cr)
				printf("*");
			else printf(" ");
				}
		printf("\n");
	}

	return 0;
}
