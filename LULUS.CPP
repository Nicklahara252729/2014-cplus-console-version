/*program menentukan kelulusan*/
#include <stdio.h>
#include <conio.h>
main(){
int nilai ;
clrscr();
printf("input nilai anda = ");
scanf("%d",&nilai);
if (nilai>=60)
{
      printf("\nselamat!!! anda lulus\n");
      printf("makan-makannya mna??\n");
}
printf("maaf anda tidak lulus,tekan sebarang tombol!!!");
getch();
}