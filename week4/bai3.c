#include <stdio.h>
int main()
{
  printf("%-10s\n","SUNNY");
  printf("%-20s%-2d%-5s\n","Feels Like:",91,"*F");
  printf("%-20s%-5.2f%-10s\n","Barometer:",29.62," in and steady");
  printf("%-20s%-2d%\%\n","Humidity:",43);
  printf("%-20s%-4.2f%-5s\n","Visibility:",4.35,"ml");
  printf("%-20s%-2d%-5s\n","Dewpoint:",64,"*F");
  printf("%-20s%-10s\n","Wind","SE 5 mph");
  printf("%-20s%-10s\n","Sunrise:","6:20 AM");
  printf("%-20s%-10s\n","Sunset:","5:59 PM");
  return 0;
}
