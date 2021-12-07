#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>


int main(){
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
}
