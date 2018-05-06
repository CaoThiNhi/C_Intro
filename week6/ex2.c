#include <stdio.h>

int main ()
{
	int a;
	printf("Nhap vao so gio lam cua nhan vien:");
	scanf("%d", &a);

	if (a<41)
		printf("Tien luong cua nhan vien la:%d$", a*25);
	else
		printf("Tien luong cua nhan vien la: %d$\n", 40*25+(a-40)*40);

	
	return 0;
}
