#include <stdio.h>

int main ()
{
	int w,t;
	float price;
	char name, class;

	printf("Nhap vao ten phim: ");
	gets(s);
	scanf("%s", &name);

	printf("Nhap vao thoi gian xem (Neu la cuoi tuan, nhap 0. Neu khong phai thi nhap 1): ");
	scanf("%d", &w);

   	printf("Nhap vao so tuoi cua ban: ");
	scanf("%d", &t);
		
	if (w>=0 & w<2)

	{
		if (w =1)
			w = 7;
		else w = 10;
	}
	else printf("Khong hop le.\n");
		
   	printf("Movie: %s", name);
   	printf("Class:");
   	{	if (1<=t & t<18)
	   		price = 0.5*w; printf("Child\n");
	   	else if (18<=t & t<65)
   			price = 0.5*w; printf("Aldult\n");
   			else if (65<t & t <120)
   				price = 0.7*w;  printf("Senior Citizen\n");
   	}

	 {  if (w=1)
			printf("Date: Not Weekend");
    	else printf("Date: Weekend");
	 }
		printf("Price: $%f", price);
	
	return 0;
}
