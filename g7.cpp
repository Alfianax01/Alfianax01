
#include <stdio.h>

int main(){


  int pilihan;
  float num1, num2,num3,num4,num5,num6,num7,num8, hasil;
 
 //output//
 printf("=== Menu Sederhana ===\n");
  printf("1. Tambah dua angka\n");
  printf("2. kali dua angka\n");
  printf("3. bagi dua angka\n");
   printf("4. kurang dua angka\n");
  printf("5.campuran\n");
  printf("pilih opsi (1-6):");
  scanf ("%d", &pilihan);


//printf("pertambahan\n");
 if(pilihan == 1) {
 	printf("pertambahan\n");
    printf("Masukkan Angka Pertama: ");
    scanf("%f" , &num1);
    printf("Masukkan Angka kedua:");
    scanf("%f" , &num2);
    hasil = num1 + num2;
    printf("Hasil penjumlahan: %.2f\n", hasil);

}
//      printf("perkalian\n");
     else if(pilihan == 2) {
    printf("Masukkan Angka Pertama: ");
    scanf("%f" , &num3);
    printf("Masukkan Angka kedua:");
    scanf("%f" , &num4);
    hasil = num3 * num4;
    printf("Hasil perkalian: %.2f\n", hasil);
}
  
//    printf("pembagian\n");
    else if(pilihan == 3) {
    printf("Masukkan Angka Pertama: ");
    scanf("%f" , &num5);
    printf("Masukkan Angka kedua:");
    scanf("%f" , &num6);
    hasil = num5 / num6;
    printf("Hasil pembagian: %.2f\n", hasil);
}
//     printf("pengurangan\n");
     else if(pilihan == 2) {
    printf("Masukkan Angka Pertama: ");
    scanf("%f" , &num7);
    printf("Masukkan Angka kedua:");
    scanf("%f" , &num8);
    hasil = num7 - num8;
    printf("Hasil perkalian: %.2f\n", hasil);
    }
  

//   printf("campuran\n");
     else if(pilihan == 5) {
     	printf("campuran\n");
    printf("Masukkan Angka pertama : ");
    scanf("%f," , &num1 );
    printf("Masukkan Angka kedua: ");
    scanf("%f" , &num3);
    printf("Masukkan Angka ketiga:");
    scanf("%f" , &num4);
    printf("Masukkan Angka keempat:");
    scanf("%f" , &num8);
    printf("Masukkan Angka kelima:");
    scanf("%f" , &num6);
    hasil = num1 + num3 * num4 - num8 / num6 ;
    printf("Hasil : %.2f\n", hasil);
   
    }else {
    printf("404 not found....\n");
   }   
   
   printf("\n");
  
  return 0;


}

//tambah satu angka,kurang satu angka
