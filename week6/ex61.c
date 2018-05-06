#include <stdio.h>

int main()
{
	chor a,b,c,max;

	printf("Nhap vao lan luot 3 ki tu: ");
	scanf("%c %c %c", &a, &b, &c);
	if (a<b)
		if (a<c)
			printf("%c",a);
	    else
			printf("%c",c);
	else
				if (b<c)
p			printf("%c",b);
	    else
			printf("%c",c);

	
	return 0;
}
