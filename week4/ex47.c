#include <stdio.h>

int main()
{
	int q, p, T, V, pay;
    char i, t;

	printf("Nhap vao ma sach: ");
	scanf("%s", &i );
	printf("Nhap vao ten cuon sach: ");
	scanf("%s", &t );
    printf("Nhap vao so luong: ");
	scanf("%d", &q );
	printf("Nhap vao gia cua cuon sach: ");
	scanf("%d", &p );

	T = q * p;
	V = T * 0,04;
	pay = T + V;

	printf("____________________________________________________");
	printf("| BK Bookseller                                     |\n");
	printf("|                                                   |\n");
	printf("| Qty   ISBN   Title              Price     Total   |\n");
	printf("|................................................   |\n");
	printf("| %6d %7s %19s %10d %10d|\n ", q, i, t, p, T );
	printf("| VAT %f                                            |\n", V );
	printf("| You pay: %f                                       |\n", pay );
	printf("|___________________________________________________|\n");

	return 0;
}
