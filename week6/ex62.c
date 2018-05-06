#include <stdio.h>

int main()
{
	float a;
	printf("Nhap vao goc toa do: ");
	scanf("%f", &a);

	if (0 <= a <= 360)
	{
		if (a<90)
			printf("North (heading) East\n");
		else if (a>=90 & a<180)
			printf("North (180.0 - heading) East\n");
		else if (a >= 180 & a<270)
			printf("Sorth (heading - 180.0) Weast\n");
		else if (a>= 270 & a<360)
			printf("North (360.0 - heading) Weast\n");
}
	else printf("Thong so vua nhap khong hop le.");
	return 0;
}
