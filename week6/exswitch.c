#include <stdio.h>

int main ()
{
	char c;
	c = getchar();
	switch (c) {
	case '0': printf ("Zero\n");
		break;
	case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9': printf("ninen"); break;
	case ' ':
	case '\n': newln++; break;
	case '\t': tabs++; break;
	defaulf: printf("missing char\n"); break;
		
	}

	
	return 0;
}
