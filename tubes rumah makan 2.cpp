#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <string.h>

main()
{
 float total_harga, kembali, pembayaran, kurang;
 int pilih, banyak_pembelian;
 char menu, nama_pegawai;
 char input_username_pegawai[50];
 char input_password[50];
 char username_pegawai[50];
 char password_pegawai[50];
 int compare(char str1[], char str2[]);


printf("Daftar Nama Pegawai\n");
printf("\t1. Ratna\n");
printf("\t2. Shafara\n");
printf("Pilih Nama Pegawai [1/2]:\n");
scanf("%d, &&nama_pegawai");

strcpy(username_pegawai, "Ratna");
strcpy(password_pegawai, "pegawai1");
strcpy(username_pegawai, "Shafara");
strcpy(password_pegawai, "pegawai2");

 		printf("\n username : ");
		fgets(input_username_pegawai, 50, stdin);
		printf("\n password :  ");
		fgets(input_password, 50, stdin);

menu:
  system("cls");
 printf("\t\tRumah Makan Rasha\n");
 printf("\tUntuk Orang-Orang Kelaparan\n");
 printf("==================================================\n");
 printf("\n Daftar Menu\n");
 printf("--------------------------------------------------\n");
 printf("Menu Makanan   Harga\n");
 printf("1. Ayam Goreng + Nasi  Rp. 20.000\n");
 printf("2. Mie Goreng   Rp. 10.000\n");
 printf("3. Nasi Goreng   Rp. 10.000\n");
 printf("4. Tahu Tek   Rp. 8.000\n");
 printf("5. Capcay   Rp. 15.000\n");

 printf("\n Masukan Kode Jenis Makanan [1/2/3/4/5] = ");scanf("%d", &pilih);

 switch(pilih){

  case 1:
   printf("\nMenu yang dipilih adalah Ayam Goreng + Nasi\n");
   printf("Pesan Berapa Banyak   = ");scanf("%d", &banyak_pembelian);
   total_harga=20000*banyak_pembelian;
   printf("Total Yang Harus dibayar   = Rp. %.0f", total_harga);
   printf("\ndibayar    = Rp. ");scanf("%f", &pembayaran);
   if (total_harga<=pembayaran){
    kembali=pembayaran-total_harga;
    printf("Kembali    = Rp. %.0f", kembali);
   }
   else if(total_harga>=pembayaran){
    kurang=total_harga-pembayaran;
    printf("uang Anda Kurang   = Rp. %.0f", kurang);
   }getch();
   printf("\n\nTerima Kasih telah Berbelanja");
   break;

  case 2:
   printf("\nMenu yang dipilih adalah Mie Goreng\n");
   printf("Pesan Berapa Banyak   = ");scanf("%d", &banyak_pembelian);
   total_harga=10000*banyak_pembelian;
   printf("Total Yang Harus dibayar  = Rp. %.0f", total_harga);
   printf("\ndibayar    = Rp. ");scanf("%f", &pembayaran);
   if (total_harga<=pembayaran){
    kembali=pembayaran-total_harga;
    printf("Kembali    = Rp. %.0f", kembali);
   }
   else if(total_harga>=pembayaran){
    kurang=total_harga-pembayaran;
    printf("uang Anda Kurang   = Rp. %.0f", kurang);
   }getch();
   printf("\n\nTerima Kasih telah Berbelanja");
   break;

  case 3:
   printf("\nMenu yang dipilih adalah Nasi Goreng\n");
   printf("Pesan Berapa Banyak   = ");scanf("%d", &banyak_pembelian);
   total_harga=10000*banyak_pembelian;
   printf("Total Yang Harus dibayar  = Rp. %.0f", total_harga);
   printf("\ndibayar    = Rp. ");scanf("%f", &pembayaran);
   if (total_harga<=pembayaran){
    kembali=pembayaran-total_harga;
    printf("Kembali    = Rp. %.0f", kembali);
   }
   else if(total_harga>=pembayaran){
    kurang=total_harga-pembayaran;
    printf("uang Anda Kurang  = Rp. %.0f", kurang);
   }getch();
   printf("\n\nTerima Kasih telah Berbelanja");
   break;

  case 4:
   printf("\nMenu yang dipilih adalah Tahu Tek\n");
   printf("Pesan Berapa Banyak   = ");scanf("%d", &banyak_pembelian);
   total_harga=8000*banyak_pembelian;
   printf("Total Yang Harus dibayar  = Rp. %.0f", total_harga);
   printf("\ndibayar    = Rp. ");scanf("%f", &pembayaran);
   if (total_harga<=pembayaran){
    kembali=pembayaran-total_harga;
    printf("Kembali    = Rp. %.0f", kembali);
   }
   else if(total_harga>=pembayaran){
    kurang=total_harga-pembayaran;
    printf("uang Anda Kurang  = Rp. %.0f", kurang);
   }getch();
   printf("\n\nTerima Kasih telah Berbelanja");
   break;

 case 5:
 	printf("\nMenu yang dipilih adalah Capcay\n");
 	printf("Pesan Berapa Banyak  = "); scanf("%d", &banyak_pembelian);
 	total_harga=15000*banyak_pembelian;
 	printf("Total Yang Harus dibayar = Rp. %.0f", total_harga);
 	printf("\ndibayar   = Rp. ");scanf("%f", &pembayaran);
 	if (total_harga<=pembayaran){
 		kembali=pembayaran-total_harga;
 		printf("Kembali  = Rp. %.0f", kembali);
	 }
	 else if(total_harga>=pembayaran){
	 	kurang=total_harga-pembayaran;
	 	printf("uang Anda Kurang  = Rp. %.0f", kurang);
	 	}getch();
	 	printf("\n\nTerima Kasih telah Berbelanja");
	 	break;

  default:
   printf("\nKode yang anda Masukan Salah\n");
   printf("Apakah Anda Ingin Kemabali Ke Menu? (Y/T)");menu=getche();
   if(menu=='Y'||menu=='y'){
    goto menu;
   }
   else if (menu=='T'||menu=='t'){
    goto exit;
   }
   exit:
   printf("\n\nTerima Kasih telah Berbelanja");
   break;
 }getch();

}
