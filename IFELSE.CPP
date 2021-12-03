#include<stdio.h>
#include<conio.h>
main()
{
int nilai;
clrscr();
printf("Input Nilai Anda = ");
scanf("%d",&nilai);
if (nilai>=60	)
{
    printf("\nSelamat!!! Anda Lulus\n");
    printf("Makan-Makannya Mana??	\n");
}
else {
printf("\nAnda Gagal!!!\n");
    printf("silahkan ngulang semester depan");
}
printf("tekan sebarang tombol untuk keluar!!!");
getch();
}