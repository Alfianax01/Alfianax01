#include<stdio.h>

int main(){
	int pilihan;
	printf("Paket Nasi Padang\n");
	printf("1.Paket A:Rp.25.000.-\n");
	printf("2.Paket B:Rp.250.000.-\n");
    printf("3.Paket C:Rp.15.000.-\n");
	printf("Masukkan PIlihan Paket :");
	scanf("%d", &pilihan);
	switch(pilihan){
		case 1 :
			printf("Memuat 1 Ayam bakar atau Ayam goreng dan 1 es teh");
			break;
			  case 2 :
			  printf("Memuat 2 Ayam bakar atau Ayam goreng ,1 telor dadar , 2 kerupuk dan 1 es teh");
			   break;
			       case 3 :
			      printf("Memuat 1 Ayam bakar atau Ayam goreng");
			      break;
			              default:
			              printf("Paket Tidak Tersedia");
	}
	
	
}
