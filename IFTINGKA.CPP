#include<stdio.h>
#include<conio.h>
void main()
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
if (nilai<=59)
{
printf("Maaf Anda Belum Lulus");
}
getch();
}