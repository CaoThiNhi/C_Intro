/* Cao Thi Nhi - 20132870 */
// Date Create: 20/3/2018

#include<stdio.h>

int main()
{
	int i, j, c;

	printf("Nhap canh: ");
	scanf("%d", &c);

	for(i=1;i<=c;i++){
		for(j=1;j<=c;j++){
			if(i==1 || i==c || i==j)
				printf("*");
			else printf(" ");
				}
		printf("\n");
	}

	return 0;
}
