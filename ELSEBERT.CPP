#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int tugas,uts,uas,harian;
float nilaiakhir;
char index;
printf("Nilai Tugas = ");scanf("%i",&tugas);
printf("Nilai UTS   = ");scanf("%i",&uts);
printf("Nilai UAS   = ");scanf("%i",&uas);
printf("Nilai Harian= ");scanf("%i",&harian);
nilaiakhir=0.3*harian+0.2*tugas+0.2*uts+0.3*uas;
printf("Nilai Akhir = %f\n",nilaiakhir);
if (nilaiakhir>=80);
else
index='A';
if (nilaiakhir>=68);

else
index='B';

if (nilaiakhir>=56);
else

index='X';

printf("Index : %c\n",index);
getch();
}