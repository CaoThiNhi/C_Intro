#include <stdio.h>

int main()
{
	int d,m,y,x;
	char ch1,ch2;
	float f;
	printf("Nhap gia tri x: ");
	scanf("%d", &x);
	printf("x = %d", &x);
	printf("Nhap gia tri ngay, thang nam sinh: ");
	scanf("%d/%d/%d", &d,&m,&y);
	printf("Nhap gia tri x: ");
	scanf("%c%c", &ch1, &ch2);
	scanf("%f", &f);
	return 0;
}
