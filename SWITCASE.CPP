#include<stdio.h>
#include<conio.h>
void main()
{
char kode;
clrscr();
printf("Masukkan Kode Hari : 1-7 = ");
scanf("%c",&kode);
switch(kode)
{
case'1':
printf("Anda Memilih Hari : Senin \n");
break;
case'2':
printf("Anda Memilih Hari : Selasa \n");
break;
case'3':
printf("Anda Memilih Hari : Rabu \n");
break;
case'4':
printf("Anda Memilih Hari : Kamis \n");
break;
case'5':
printf("Anda Memilih Hari : Jum'at \n");
break;
case'6':
printf("Anda Memilih Hari : Sabtu \n");
break;
case'7':
printf("Anda Memilih Hari : Minggu \n");
break;
default:
printf("Anda Salah Pilih Hari!!!");
break;
}
getch();
}