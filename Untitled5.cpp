#include<stdio.h>

int main(){
	int pilihan;
	printf("Paket Alat dan Buku tulis\n");
	printf("1.Paket A:Rp.25.000.-\n");
	printf("2.Paket B:Rp.50.000.-\n");
    printf("3.Paket C:Rp.75.000.-\n");
	printf("Masukkan PIlihan Paket");
	scanf("%d", &pilihan); 
	switch(pilihan){
		case 1 :
			printf("Berisikan 2 buku tulis dan 10 pulpen");
			break;
			case 2 :
			printf("Berisikan 1 pack buku dan 10 pulpen");
			break;
			case 3 :
			printf("Berisikan 1 toko");
			break;
			default:
			printf("Paket Tidak Tersedia");
			break;
		}
	}
