#include <stdio.h>
int main(){

 printf ("Materi Assignment Operators\n");
  int a = 5;
  int b = 10;
  printf ("%d\n", b);
  b = a;
//  printf ("%d\n",b);
  
  //contoh 2 operator
  a = 3;
  b = 2;
  a += b;
  printf("%d\n", a);
  
  //contoh 3 operator
  a = 3;
  b = 2;
  a -= b;
  printf("%d\n", a);
  
   //contoh 4 operator
  a = 3;
  b = 2;
  a *= b;
  printf("%d\n", a);
  
   //contoh 5 operator
  a = 6;
  b = 2;
  a /= b;
  printf("%d\n", a);
  
   //contoh 6 operator
  a = 16;
  b = 3;
  a %= b;
  printf("%d\n", a);
 
 return 0; 
}
