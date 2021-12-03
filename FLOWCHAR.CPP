#include<stdio.h>
#include<iostream.h>
#include<conio.h>
void main()
{
char huruf='D';
char kata[9]="Bahasa C";
printf("%c\n", huruf);
printf("%3c\n", huruf);
printf("%-3c\n", huruf);
printf("\n");
printf("%s\n", kata);
printf("%15s\n", kata);
printf("%-15s\n", kata);
printf("%15.s\n", kata);
printf("%-15.s\n", kata);
}