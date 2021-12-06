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
 
printf("Daftar Nama Pegawai\n");
printf("\t1. Ratna\n");
printf("\t2. Shafara\n");
printf("Pilih Nama Pegawai [1/2]:\n");
scanf("%d, &&nama_pegawai");

strcpy(username_pegawai, "Ratna");
strcpy(password_pegawai, "pegawai1");
strcpy(username_pegawai, "Shafara");
strcpy(password_pegawai, "pegawai2");

	printf("Silahkan Login!\n");

 	printf("\n username : ");
	fgets(input_username_pegawai, 50, stdin);
	printf("\n password :  ");
	fgets(input_password, 50, stdin);
	
	if(strcmp(username_pegawai, "Ratna") == 0 && strcmp(password_pegawai, "pegawai1") == 0){
	if(strcmp(username_pegawai, "Shafara") == 0 && strcmp(password_pegawai, "pegawai2") == 0) {
		
	printf("Login Berhasil!\n\n");
	



  
