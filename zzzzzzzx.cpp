#include <stdio.h>

//const double PI = 3.14;

int main (){

int a = 0;
int b = 0;

scanf("%d + %d", &a , &b);
int calculate = a + b ;
printf("%d\n", calculate);

//printf("%lf\n", PI);
//
//  float number = 10;
//    printf ("%f", number /3);

//int num = 2;

if(calculate % 2 == 0){
  printf ("bilangan genap\n ");
}else {
	printf ("Bilangan ganjil\n");
}
 
 int anakRpl = 10;
 printf ("%d\n", 33 % anakRpl);
return 0;
}
