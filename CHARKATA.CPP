#include<stdio.h>
void main()
{
char huruf='D';
char kata[9]="bahasa C";
printf("%c\n", huruf);    /*lebarnya adalah 1 karakter*/
printf("%3c\n",huruf);    /*lebarnya adalah 3 karakter*/
printf("%-3c\n",huruf);   /*lebarnya 3 karakter, rata kiri*/
printf("\n");
printf("%s\n",kata);      /*semua karakter,rata kiri*/
printf("%15s\n",kata);    /*lebar 15 karakter, rata kanan*/
printf("%-15s\n",kata);   /*lebar 15 karakter, rata kiri*/
printf("%15.5s\n",kata);  /*lebar 15 karakter, 5 rata kanan*/
printf("%-15.5s\n",kata); /*lebar 15 karakter, 5 rata kiri*/
}
