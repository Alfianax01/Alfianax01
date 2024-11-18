#include <stdio.h>
//#include <string.h>


int main() {
  int pilihan;
  int jumlah_anak, jumlah_dewasa, jumlah_senior;
  int total_pembayaran;
  float harga,total,daging,caviar,hasil;
  printf("Selamat Datang Di DOFUN\n");
 printf("1.Check Promo\n");
 printf("2.Wahana Permainan\n");
 printf("3.Informasi Tentang E-Ticket\n");
 printf("4.PEraturan Pembelian E-Ticket\n");
 printf("5.Beli E-Ticket\n");
 printf("6.Exit\n");
 printf("\nPilih Opsi :");
  scanf("%d", &pilihan);
//}

 switch (pilihan) {
      case 1:
     // int  tampilkanPromo();
     printf("\n ||              Promo Hari Ini!             ||\n");
     printf("Diskon 20 persen untuk pembelian tiket anak-anak\n");
 printf("Diskon 10 persen untuk pembelian tiket dewasa\n");
 printf("Diskon 30 persen untuk pembelian tiket senior\n");
 
 printf("=============================================\n");
  printf("\nPilih Opsi :");
        break;
      case 2:
 printf(" = Jenis Wahana Permainan  =\n");
        printf("1. Roller Coaster\n");
        printf("2. Ferris Wheel\n");
        printf("3. Bumper Cars\n");
         printf("4. Merry-Go-Round\n");
        printf("5.Water Slide\n");
      printf("6. Haunted House\n");
        printf("7.Swing Ride\n");
        printf("8.Drop Tower\n");
         printf("9.Log Flume\n");
        printf("10.Pirate Ship\n");
        
        
        
        printf("\nPilih Opsi :");
        break;
      case 3:
        printf("=========================== Informasi tentang E-Ticket ===========================\n");
        printf("1.Anda Dapat Menukarkan E-Ticket Ini Di locket Masuk DOFUN\n");
             printf("2.E-Ticket Ini Hanya Berlaku Untuk 1 Kali Masuk\n");
             printf("E-Ticket Ini Hanya Berlaku Untuk Maksimal 7 Hari Setelah Waktu Pembelian");
         printf("\n===================================================================================\n");
      
	   printf("\nPilih Opsi :");
	    break;
      case 4:
        printf("======== Peraturan Pembelian E-Ticket ========\n");
        printf("1. Kategori Anak-Anak Jika dibawah 12 Tahun\n");
        printf("2. Kategori Dewasa Jika Diatas 12 Tahun\n");
        printf("3. Kategori Senior Jika Diatas 60 Tahun\n");
        printf("==============================================\n");
      
	   printf("\nPilih Opsi :");
	    break;
      case 5:
         
        printf("Masukkan jumlah tiket anak-anak: ");
        scanf("%d", &jumlah_anak);
        printf("Masukkan jumlah tiket dewasa: ");
        scanf("%d", &jumlah_dewasa);
        printf("Masukkan jumlah tiket senior: ");
        scanf("%d", &jumlah_senior);

       
        if (jumlah_anak < 0 || jumlah_anak > 20 ||
            jumlah_dewasa < 1 || jumlah_dewasa > 20 ||
            jumlah_senior < 0 || jumlah_senior > 20) {
          printf("Input tidak valid. Harap masukkan angka dalam range yang ditentukan.\n");
          break;
        }

     
        total_pembayaran = jumlah_anak * 100000 + jumlah_dewasa * 150000 + jumlah_senior * 80000;
        printf("\nINVOICE PEMBAYARAN\n");
        printf("=========================\n");
        printf("Jumlah tiket anak-anak : %d x Rp 100.000 = Rp %d\n", jumlah_anak, jumlah_anak * 100000);
        printf("Jumlah tiket dewasa    : %d x Rp 150.000 = Rp %d\n", jumlah_dewasa, jumlah_dewasa * 150000);
        printf(" Jumlah tiket senior     : %d x Rp 80.000  = Rp %d\n", jumlah_senior, jumlah_senior * 80000);
        printf("=========================\n");
        printf("Total biaya            : Rp %d\n", total_pembayaran); 
        char konfirmasi;
        printf("Apakah Anda ingin melanjutkan pembelian? (1/2): ");
        scanf(" %c", &konfirmasi);

        if (konfirmasi == '1' || konfirmasi == '2') {
          printf("Pembelian berhasil! Terima kasih telah membeli tiket.\n");
        } else {
          printf("Pembelian dibatalkan.\n");
        }
        
		 printf("\nPilih Opsi :");
		break;
    
       case 6:
        printf("=== Ayo Rekreasi di DOFUN ===\n");
        break;
      default:
        printf("Opsi Tidak Ditemukan\n");
        break;
    }
  do {
   int tampilkanMenuUtama();
    scanf("%d", &pilihan);
switch (pilihan) {
      case 1:
     // int  tampilkanPromo();
     printf("\n ||              Promo Hari Ini!             ||\n");
     printf("Diskon 20 persen untuk pembelian tiket anak-anak\n");
 printf("Diskon 10 persen untuk pembelian tiket dewasa\n");
 printf("Diskon 30 persen untuk pembelian tiket senior\n");
 
 printf("=============================================\n");
  printf("\nPilih Opsi :");
        break;
      case 2:
 printf(" = Jenis Wahana Permainan  =\n");
        printf("1. Roller Coaster\n");
        printf("2. Ferris Wheel\n");
        printf("3. Bumper Cars\n");
         printf("4. Merry-Go-Round\n");
        printf("5.Water Slide\n");
      printf("6. Haunted House\n");
        printf("7.Swing Ride\n");
        printf("8.Drop Tower\n");
         printf("9.Log Flume\n");
        printf("10.Pirate Ship\n");
        printf("\nPilih Opsi :");
        break;
      case 3:
        printf("=========================== Informasi tentang E-Ticket ===========================\n");
        printf("1.Anda Dapat Menukarkan E-Ticket Ini Di locket Masuk DOFUN\n");
             printf("2.E-Ticket Ini Hanya Berlaku Untuk 1 Kali Masuk\n");
             printf("E-Ticket Ini Hanya Berlaku Untuk Maksimal 7 Hari Setelah Waktu Pembelian");
         printf("\n===================================================================================\n");
      
	   printf("\nPilih Opsi :");
	    break;
      case 4:
        printf("======== Peraturan Pembelian E-Ticket ========\n");
        printf("1. Kategori Anak-Anak Jika dibawah 12 Tahun\n");
        printf("2. Kategori Dewasa Jika Diatas 12 Tahun\n");
        printf("3. Kategori Senior Jika Diatas 60 Tahun\n");
        printf("==============================================\n");
      
	   printf("\nPilih Opsi :");
	    break;
      case 5:
         
        printf("Masukkan jumlah tiket anak-anak: ");
        scanf("%d", &jumlah_anak);
        printf("Masukkan jumlah tiket dewasa: ");
        scanf("%d", &jumlah_dewasa);
        printf("Masukkan jumlah tiket senior: ");
        scanf("%d", &jumlah_senior);

       
        if (jumlah_anak < 0 || jumlah_anak > 20 ||
            jumlah_dewasa < 1 || jumlah_dewasa > 20 ||
            jumlah_senior < 0 || jumlah_senior > 20) {
          printf("Input tidak valid. Harap masukkan angka dalam range yang ditentukan.\n");
          break;
        }

     
        total_pembayaran = jumlah_anak * 100000 + jumlah_dewasa * 150000 + jumlah_senior * 80000;
        printf("\nINVOICE PEMBAYARAN\n");
        printf("=========================\n");
        printf("Jumlah tiket anak-anak : %d x Rp 100.000 = Rp %d\n", jumlah_anak, jumlah_anak * 100000);
        printf("Jumlah tiket dewasa    : %d x Rp 150.000 = Rp %d\n", jumlah_dewasa, jumlah_dewasa * 150000);
        printf(" Jumlah tiket senior     : %d x Rp 80.000  = Rp %d\n", jumlah_senior, jumlah_senior * 80000);
        printf("=========================\n");
        printf("Total biaya            : Rp %d\n", total_pembayaran); 
        char konfirmasi;
        printf("Apakah Anda ingin melanjutkan pembelian? (1/2): ");
        scanf(" %c", &konfirmasi);

        if (konfirmasi == '1' || konfirmasi == '2') {
          printf("Pembelian berhasil! Terima kasih telah membeli tiket.\n");
        } else {
          printf("Pembelian dibatalkan.\n");
        }
        
		 printf("\nPilih Opsi :");
		break;
    
       case 6:
        printf("=== Ayo Rekreasi di DOFUN ===\n");
        break;
      default:
        printf("Opsi Tidak Ditemukan\n");
      break; 
  }
  } while (pilihan != 6);

  return 0;
}
