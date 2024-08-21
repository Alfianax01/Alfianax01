// if,else,else if 
#include <stdio.h>

int main(){
     int umur = 0;
     char nama ;
     printf("===========================\n\n");
     printf("=== Pembuatan KTP 2024 ====\n\n");
     printf("===========================\n\n");
     
	 printf("Silahkan Masukkan nama Anda :");
     scanf("%s",&nama);

     printf("Silahkan Masukkan Umur Anda :");
     scanf("%d",&umur);

     if(umur >= 17 && umur <= 99){
      printf("Bisa Bikin KTP\n\n");
     }
     
       else if(umur >= 100){
      printf("MUMI\n");
	 }
     
	 else{
	 printf("Belum Bisa Bikin KTP\n");
	 }
    
    // kedua   
     int tanggal = 0;
     printf("Silahkan Masukkan tanggal Lahir Kalian :");
     scanf("%d",&tanggal);

     if(tanggal == 18 || tanggal == 28){
      printf("Makan Gratis\n");
     }
   
	 else{
	 printf("Bayar bro");
	 }


     return 0;
}
