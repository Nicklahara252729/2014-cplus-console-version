#include<stdio.h>
#include<iostream.h>
void main()
{
char nama[80],nim[10],jenkel,tl[20],tgl[20],agama[20],alamat[100],telp[20];
printf("input nama anda           = "); fflush(stdin); scanf("%[^\n]",nama);
printf("masukkan nim anda         = "); fflush(stdin); scanf("%s",&nim);
printf("input jenis kelamin [L/P] = "); fflush(stdin); scanf("%c",&jenkel);
printf("input tempat lahir        = "); fflush(stdin);
scanf("%s",&tl);
printf("input tangal lahir        = "); fflush(stdin);
scanf("%[^\n]",&tgl);
printf("input agama               = "); fflush(stdin);
scanf("%[^\n]",&agama);
printf("input alamat              = "); fflush(stdin);
scanf("%[^\n]",&alamat);
printf("input No Telepon          = "); fflush(stdin);
scanf("%s",&telp);
printf("nama anda adalah = %s\n",nama);
printf("nim anda = %s\n",nim);
printf("Jenis Kelamin = %c\n",jenkel);
printf("Tempat/Tgl Lahir = %s / %s\n",tl,tgl);
printf("Agamamu = %s\n",agama);
printf("alamatmu = %s\n",alamat);
printf("No Telp = %s\n",telp);
}