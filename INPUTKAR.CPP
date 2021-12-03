#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
char nama[20];
char hobby[20];
char sekolah[20];
clrscr();
printf("Masukkan Nama Anda : ");
gets(nama);
printf("Hello, Nama Anda Adalah %s\n",nama);
printf("Masukkan Hobby Anda : ");
gets(hobby);
printf("Ya Ampun, Masa Hobby-nya %s\n",hobby);
printf("Masukkan Nama Sekolah Anda : ");
gets(sekolah);
printf("Pilihan Anda Tepat, Karena Telah Pilih %s\n",sekolah);
getch();
}