/*Program menentukan kelulusan */
#include<stdio.h>
#include<conio.h>
main(){
int nilai;
clrscr();
printf("input nilai anda=");
scanf("%d",&nilai);
if (nilai>=60)
{
printf("\nSelamat!!!anda lulus\n");
printf("makan-makannya mana??\n");
}
printf("tekan sembarang tombol untuk keluar!!!");
getch();
}