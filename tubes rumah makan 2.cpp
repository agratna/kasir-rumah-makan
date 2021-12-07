#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include<stdlib.h>

main()
{
float total_harga, kembali, pembayaran, kurang;
int pilih, banyak_pembelian;
char menu;
char username[8], pass[12];
int repeat = 0, gagal = 0;

   while(repeat < 3){
      printf("Masukkan Username : ");
      scanf("%s", &username);
      printf("Masukkan Password : ");
      scanf("%s", &pass);

      if(strcmp(username,"Rasha")==0 && strcmp (pass,"lapar")== 0){
         printf("Selamat, kamu berhasil login\n");
         break;
      }else{
         printf("Input Salah!\n");
         gagal++;
         if(gagal == 3){
            printf("Sayang sekali, kamu tidak bisa login lagi\n");
         }
      }
      repeat++;
   }

   system("pause");



  
