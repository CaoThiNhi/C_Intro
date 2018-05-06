#include <stdio.h>

int main()
{
	int a,b,c,max;
	
	printf("Nhap gia tri a:\n");
	scanf("%d", &a);
	printf("Nhap gia tri b:\n");
	scanf("%d", &b);
	printf("Nhap gia tri c:\n");
	scanf("%d", &c);

	max = a>b? a:b;
	max = max>c? max:c;
	printf("Gia tri lon nhat trong ba so la: %d\n", max);

	(a+b+c)/3.0 >10? printf("Tong 2 so dau: a+b = %d\n", a+b): printf("Tong 2 so cuoi: b+c = %d\n", b+c);

	return 0;
}
