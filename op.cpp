#include <stdio.h>

int main(){
printf("===================\n");
 printf("=== Calculator ====\n");
 printf("===================\n");
 
 int angka1,angka2,angka3,angka4,angka5,angka6,angka7,angka8,angka9,angka10;
  printf("pertambahan\n");
 printf("Silahkan Masukkan Angka ="); 
  scanf("%d", &angka1);
  scanf("%d", &angka2);
  printf("Hasil pertambahan = %d\n\n", angka1 + angka2);
 
 printf("pengurangan\n");
 printf("Silahkan Masukkan Angka ="); 
  scanf("%d", &angka3);
  scanf("%d", &angka4);
  printf("Hasil pengurangan = %d\n\n", angka3 - angka4);

printf("perkalian\n");
 printf("Silahkan Masukkan Angka ="); 
  scanf("%d", &angka5);
  scanf("%d", &angka6);
  printf("Hasil perkalian = %d\n\n", angka5 * angka6);	

printf("modulus\n");
 printf("Silahkan Masukkan Angka ="); 
  scanf("%d", &angka7);
  scanf("%d", &angka8);
  printf("Hasil modulus = %d\n\n", angka7 % angka8);

printf("pembagian\n");
 printf("Silahkan Masukkan Angka ="); 
  scanf("%d", &angka9);
  scanf("%d", &angka10);
  printf("Hasil pembagian = %d\n\n", angka9 / angka10);
	

 return 0;
 
}
