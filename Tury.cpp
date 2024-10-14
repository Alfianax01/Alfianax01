#include <stdio.h>

int main (){

  int a = 0;
  int b = 0;


  a = 10;
  b = a;
  a = b;

printf ("%d\n", a);
printf ("%d\n", b);
printf ("%d\n", a);

return 0;
}
