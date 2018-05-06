#include <stdio.h>
int main ()
{
  printf("Giai cau do:\n Tram co tram trau \n Trau dung an nam\n Trau nam an ba\n Lu khu trau gia\n Ba trau mot bo\n");
  
  int x,y,z,dem;
  dem=0;

  for (x=1; x<=20; x++)
    for (y=1; y<=33; y++)
	for(z=1; z<=100-x-y; z++)
    		if ( 5*x + 3*y + z/3 == 100 && x+y+z ==100 )
      		{
			dem++;
			printf("Truong hop %d:\n",dem);
			printf("Trau dung: %d, an %d bo co\n", x, 5*x);
			printf("Trau nam: %d, an %d bo co\n", y, 3*y);
			printf("Trau gia: %d, an %d bo co\n", z, z/3);
      }
  return 0;

}
